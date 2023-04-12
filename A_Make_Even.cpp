#include<bits/stdc++.h>
using namespace std;

typedef  long long int          ll;
typedef  long double            ld;
typedef  string                 str;
typedef  vector<ll>             vll;
typedef  vector<string>         vs;
typedef  vector<pair<ll, ll>>   vpl;
typedef  set<ll>                sll;
typedef  map<ll,ll>             mll;
typedef  pair<int,int>          pint;
typedef  pair<ll,ll>            pll;
double   pi = acos(-1.0);
#define  debug(x)              cerr<<#x<< <<x<<endl;
#define  loop                   for(ll i=1; i<=n; i++)
#define  all(a)                 (a).begin(), (a).end()
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)));
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)));

// int main()
// {

//     int t,count,flag;
//     string s;
//     cin>>t;
//     while(t--){
//         cin>>s;
//         count=0,flag=0;
//         if((s.back()-48)%2==0) cout<<0<<endl;
//         else{
//             if((s.front()-48)%2==0) {
//                 count=1;
//                 flag=1;
//             }
//             else{
//                 for(int i=0;i<s.size();i++){
//                     if((s[i]-48)%2==0){
//                         count=2;
//                         flag=1;
//                         break;
//                     }
//                 }
                
//             }
//             if(flag==0) cout<<-1<<endl;
//             else cout<<count<<endl;
//         }
//     }

//     return 0;
// }

int main(){
    int t,ans;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if((s.back()-48)%2==0) ans=0;
        else if((s.front()-48)%2==0) ans=1;
        else{
            int two=count(s.begin(),s.end(),'2');
            int four=count(s.begin(),s.end(),'4');
            int six=count(s.begin(),s.end(),'6');
            int eight=count(s.begin(),s.end(),'8');

            if(two>0 || four>0 ||six>0||eight>0) ans=2;
            if(two==0 && four==0 && six==0 && eight==0) ans=-1;
        }
        cout<<ans<<endl;
    }
}