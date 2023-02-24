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

    ll t,p,a,b,c,ans1,ans2,ans3;
    cin>>t;

    while(t--){
        cin>>p>>a>>b>>c;
        if((p%a==0)||(p%b)==0||(p%c==0)) cout<<0<<endl;
        else if(a==b && b==c && (p%a==0)) cout<<0<<endl;
        else{
            ans1=(((p/a)+1)*a)-p;
            ans2=(((p/b)+1)*b)-p;
            ans3=(((p/c)+1)*c)-p;

            cout<<min3(ans1,ans2,ans3)<<endl;
        }
    }


    return 0;
}