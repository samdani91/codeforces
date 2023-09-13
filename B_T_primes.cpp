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
 
const ll N=1e6+10;
vector<bool>p(N,1);

int main()
{
 
    int n;
    ll x;
    bool flag;
    cin>>n;

    p[1]=false;

    for(int i=2;i*i<=N;i++){
        if(p[i])
        {
            for(int j=2*i;j<=N;j+=i)
            {
                p[j]=false;
            }
        }
    }

    while(n--){
        flag=true;
        cin>>x;
        ll temp=sqrt(x);
        if(temp*temp==x && p[temp]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
 
    }
 
    return 0;
}