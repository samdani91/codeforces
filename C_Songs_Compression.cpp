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
    return (a.first-a.second) > (b.first-b.second);
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int n,d;
    cin>>n>>d;

    vpl v;
    ll sum=0;
    ll csum=0;

    loop{
        ll x,y;cin>>x>>y;
        v.push_back({x,y});
        sum+=x;
        csum+=y;
    }

    if(csum>d){
        cout<<-1;return 0;
    }

    sort(v.begin(),v.end(),comp);

    for(int i=1;i<=n;i++){
        if(sum<=d){
            cout<<i-1;return 0;
        }
        sum-= (v[i-1].first-v[i-1].second);
    }

    if(sum<=d) cout<<n;
    else cout<<-1;


    return 0;
}