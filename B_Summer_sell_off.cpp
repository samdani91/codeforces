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

bool comp(pll a,pll b)
{
    return (min(2*a.first,a.second)-min(a.first,a.second))>(min(2*b.first,b.second)-min(b.first,b.second));
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    vpl v;
    int n,f;
    cin>>n>>f;

    loop{
        ll x,y;cin>>x>>y;
        v.push_back({x,y});
    }

    sort(v.begin(),v.end(),comp);

    ll ans=0;

    for(auto it:v){
        if(f>0){
            ans+=min(2*it.first,it.second);
            f--;
        }
        else{
            ans+=min(it.first,it.second);
        }
    }

    cout<<ans;

    return 0;
}