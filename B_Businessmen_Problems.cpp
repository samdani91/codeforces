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

bool comp(pair<ll,ll>a,pair<ll,ll>b)
{
    return a.second>b.second;

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    ll n,m;
    vector<pair<ll,ll>>f;
    set<int>st;

    ll ans=0;

    cin>>n;
    loop{
        ll x,y;cin>>x>>y;
        f.push_back({x,y});
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        ll x,y;cin>>x>>y;
        f.push_back({x,y});
    }

    sort(f.begin(),f.end(),comp);

    for(auto it:f){
        if(st.find(it.first)!=st.end()) continue;
        else{
            st.insert(it.first);
            ans+=it.second;
        }
    }


    cout<<ans;

    return 0;
}