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
        ll n;cin>>n;
        string s;
        cin>>s;

        ll z=0,o=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') z++;
            else o++;
        }

        if(z>o){
            cout<<"YES\n";continue;
        }

        bool f=false;

        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                f=true;
                break;
            }
        }

        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}