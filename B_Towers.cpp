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
    
    int n,k;cin>>n>>k;
    vll v;

    loop{
        ll x;cin>>x;
        v.push_back(x);
    }

    vpl ans;

    while(k--){
        ll mx=LONG_LONG_MIN,mn=LONG_LONG_MAX;
        int idx1=-1,idx2=-1;

        for(int i=0;i<n;i++){
            if(v[i]>mx){
                mx=v[i];
                idx1=i;
            }
            if(v[i]<mn){
                mn=v[i];
                idx2=i;
            }
        }
        if(abs(mx-mn) < 2) {
            break;
        }
        ans.push_back({idx1+1,idx2+1});
        v[idx1]--;
        v[idx2]++;

    }

    sort(v.begin(),v.end(),greater<int>());

    cout<<v[0]-v[n-1]<<" "<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}