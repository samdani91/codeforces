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

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s;
        cin>>s;

        map<char,int>mp;

        for(int i=0;s[i];i++){
            mp[s[i]]++;
        }

        if(mp['B']==k)  {
            cout<<0<<endl;
            continue;
        }
        int count=1;
        int op=1;
        int temp=mp['B'];
        bool flag=false;

        if(temp<k){
            for(int i=0;s[i];i++){
                if(temp==k) {
                    cout<<op<<endl;
                    cout<<i<<" B\n";
                    flag=true;
                    break;
                }
                if(s[i]=='A'){
                    temp++;
                }
            }
            if(temp==k and !flag){
                cout<<op<<endl;
                cout<<n<<" B\n";
            }
        }else{
            for(int i=0;s[i];i++){
                if(temp==k){
                    cout<<op<<endl;
                    cout<<i<<" A\n";
                    flag=true;
                    break;
                }
                if(s[i]=='B'){
                    temp--;
                }
            }
            if(temp==k and !flag){
                cout<<op<<endl;
                    cout<<n<<" A\n";
            }
        }
        mp.clear();
    }


    return 0;
}