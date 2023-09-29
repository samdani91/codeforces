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

const int N=1e5+10;

vector<int>graph[N];
bool vis[N];
bool cats[N];

void dfs(int s,int m,int catCount)
{
    vis[s]=true;
    for(int v:graph[s]){
        if(vis[v]) continue;

        int cc=catCount;

        if(cats[v]==1 and cats[s]==1) cc++;
        else if(cats[v]==1) cc=1;
        else cc=0;

        if(cc>m) continue;

        dfs(v,m,cc);
    }
}

int main()
{

    int n,m;
    cin>>n>>m;
    loop {cin>>cats[i];}
    
    for(int i=1;i<=n-1;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    int catCount=0;
    if(cats[1]) catCount=1;

    dfs(1,m,catCount);

    int res=0;
    for(int i=1;i<=n;i++){
        if(vis[i] and graph[i].size()==1 and i!=1) res++;
    }
    cout<<res;


    return 0;
}