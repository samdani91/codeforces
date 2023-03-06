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
#define  debug(x)              cerr<<#x<<" "<<x<<endl;
#define  loop                   for(ll i=1; i<=n; i++)
#define  all(a)                 (a).begin(), (a).end()
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)));
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)));

int main()
{

    ll n,m,a;
    cin>>n>>m>>a;

    if(a>=n && a>=m) cout<<1;
    else if(a>=n && a<m){
        if(m%a!=0) cout<<(m/a)+1;
        else cout<<m/a;
    }
    else if(a<n && a>=m){
        if(n%a!=0) cout<<(n/a)+1;
        else cout<<n/a;
    }
    else if(a<n && a<m){
        if(n%a==0 && m%a==0) cout<<(n/a)*(m/a);
        else if(n%a!=0 && m%a==0) cout<<((n/a)+1)*(m/a);
        else if(n%a==0 && m%a!=0) cout<<(n/a)*((m/a)+1);
        else{
            ll temp=(n/a)+1;
            ll temp2=(m/a)+1;
            cout<<temp*temp2;
        }
    }



    return 0;
}