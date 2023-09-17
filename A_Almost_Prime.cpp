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

    int n,count=0;
    cin>>n;

    int i,j;
    for(i=n;i>=1;i--){
        int temp=i;
        set<int>prime_factors;
        for(j=2;j<=sqrt(temp);j++){
            while(temp%j==0){
                prime_factors.insert(j);
                temp/=j;
            }
        }
        if(temp>1){
            prime_factors.insert(i);
        }
        if(prime_factors.size()==2) count++;
    }
    cout<<count;

    return 0;
}