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

    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;

        if(k>n){
            cout<<"NO"<<endl;
        }else{
            ll temp2= n-(k-1);
            ll temp3= n-2*(k-1);

            if(temp2%2!=0 && temp2>0){
                cout<<"YES"<<endl;
                for(int i=1;i<=k-1;i++){
                    cout<<1<<" ";
                }
                cout<<temp2<<endl;
            }else if(temp3%2==0 && temp3>0){
                cout<<"YES"<<endl;
                for(int i=1;i<=k-1;i++){
                    cout<<2<<" ";
                }
                cout<<temp3<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}