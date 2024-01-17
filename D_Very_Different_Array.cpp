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

    int t;cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;

        ll a[n],b[m];
        for(ll &ele:a) cin>>ele;
        for(ll &ele:b) cin>>ele;

        sort(a,a+n);
        sort(b,b+m);

        vll v;
        int l=0,r=m-1;
        int s=0,f=n-1;
        ll ans=0;

        while(s<=f){
            if(l<=r){
                if(abs(a[s]-b[l])>=abs(a[s]-b[r])){
                    if(abs(a[f]-b[l])>=abs(a[f]-b[r])){
                        ans+=abs(a[f]-b[l]);
                        f--;
                        l++;
                        continue;
                    }
                    ans+=abs(a[s]-b[l]);
                    s++;
                    l++;
                }else{
                    if(abs(a[f]-b[l])>=abs(a[f]-b[r])){
                        ans+=abs(a[f]-b[l]);
                        f--;
                        l++;
                        continue;
                    }
                    ans+=abs(a[s]-b[r]);
                    s++;
                    r--;
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}