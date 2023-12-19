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
        int n;cin>>n;
        int ans=INT32_MAX;
        int temp=INT32_MAX,temp2=INT32_MAX;
        while(n--){
            int m;cin>>m;
            string s;
            cin>>s;
            if(s[0]=='1' and s[1]=='1'){
                ans=min(ans,m);
                continue;
            }
            if(s[0]=='1'){
                temp=min(temp,m);
            }
            else if(s[1]=='1'){
                temp2=min(temp2,m);
            }

        }
        if(ans!=INT32_MAX and (temp!=INT32_MAX and temp2!=INT32_MAX)){
            cout<<min(ans,temp+temp2)<<endl;
        }else if(ans!=INT32_MAX and (temp==INT32_MAX or temp2==INT32_MAX)){
            cout<<ans<<endl;
        }else if(ans==INT32_MAX and (temp!=INT32_MAX and temp2!=INT32_MAX)){
            cout<<temp+temp2<<endl;
        }
        else{
            cout<<-1<<endl;
        }


    }

    return 0;
}