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

const int N=1e5+100;

vll graph[N];
bool vis[N];
vll choc(N);

ll ans=0;

ll dfs(ll s,ll cost)
{
    vis[s]=true;
    ll minCost=cost;
    for(ll child:graph[s]){
        if(vis[child]) continue;

        minCost=min(minCost,dfs(child,choc[child]));
    }
    return minCost;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int n,m;cin>>n>>m;
    loop{
        cin>>choc[i];
    }
    while(m--){
        ll u,v;cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    ll cost=0;
    loop{
        if(!vis[i]){
            cost+=dfs(i,choc[i]);
        }
    }
    cout<<cost;

    return 0;
}