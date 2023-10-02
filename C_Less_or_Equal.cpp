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

    ll n,k;
    bool flag=true;

    cin>>n>>k;
    

    vll v;
    loop{
        ll x;cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    ll ans;

    if(k==0){
        ans=v[0]-1;
    }else{
        ans=v[k-1];
    }

    ll count=0;
    for(ll i=0;i<v.size();i++){
        if(v[i]<=ans) count++;
        else break;
    }

    if(ans<1 or k!=count) cout<<-1;
    else cout<<ans;

    return 0;
}