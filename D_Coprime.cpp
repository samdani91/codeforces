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

    int t,n,res;
    cin>>t;
    while(t--){
        cin>>n;
        map<int,int>mp;
        int i,temp;
        res=-1;
        for(int i=0;i<n;i++){
            cin>>temp;
            mp[temp]=i+1;   

        }
        for(auto a:mp){
            for(auto b:mp){
                temp=gcd(a.first,b.first);
                if(temp==1){
                    res=max(res,a.second+b.second);
                }
            }
        }
        cout<<res<<endl;
    }

    return 0;
}