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
#define  loop                   for(ll i=1; i<=n; i++)
#define  all(a)                 (a).begin(), (a).end()
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)));
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)));

const int N=1e5+10;


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    unordered_map<ll,ll>map,prev;

    int n,k;
    cin>>n>>k;
    vll v;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        v.push_back(x);
        map[x]++;
    }
    
    while(k--){
        
        for(int i=0;i<n;i++){
            v[i]=map[v[i]];
        }

        map.clear();
        for(int i=0;i<n;i++){
            map[v[i]]++;
        }

        if(map==prev){
            break;
        }
        prev=map;

    }

    for(auto it:v) cout<<it<<" ";
    

    return 0;
}