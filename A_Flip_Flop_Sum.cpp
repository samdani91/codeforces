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
    
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vll v;
        loop{
            ll x;cin>>x;
            v.push_back(x);
        }
        ll cnt=count(v.begin(),v.end(),-1);
        ll sum=0;
        if(cnt==0){
            sum+=(n-2)-2;
        }else{
            bool f=false;
            for(int i=1;i<n;i++){
                if(v[i]==-1 and v[i-1]==-1){
                    f=true;
                    break;
                }
            }
            if(f){
                sum+=(abs(cnt-n))*1+(((cnt-2)*(-1)))+2;
            }else{
                sum+=(abs(cnt-n))*1+((cnt*(-1)));
            }
        }
        cout<<sum<<"\n";
    }

    return 0;
}