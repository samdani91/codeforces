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

    ll n;
    cin>>n;
    ll dist[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>dist[i][j];
        }
    }
    vector<int>del(n+2);
    for(int i=1;i<=n;i++){
        cin>>del[i];
    }
    reverse(del.begin(),del.end());

    vector<ll>ans;
    for(int k=1;k<=n;k++){
        int k_v=del[k];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                ll newDist=dist[i][k_v]+dist[k_v][j];
                dist[i][j]=min(dist[i][j],newDist);
            }
        }
        ll sum=0;
        for(int i=1;i<=k;i++){
            for(int j=1;j<=k;j++){
                sum+=dist[del[i]][del[j]];
            }
        }
        ans.push_back(sum);
    }

    reverse(ans.begin(),ans.end());

    for(auto it:ans) cout<<it<<" ";

    return 0;
}