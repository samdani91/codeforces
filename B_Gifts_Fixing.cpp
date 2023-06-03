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

    ll t,n,moves;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n];
        for(int &ele:a) cin>>ele;
        for(int &ele:b) cin>>ele;

        int min_a=*min_element(a,a+n);
        int min_b=*min_element(b,b+n);

        moves=0;
        for(int i=0;i<n;i++){
            int temp1=a[i]-min_a;
            int temp2=b[i]-min_b;
            moves += max(temp1,temp2);
        }

        cout<<moves<<endl;
    }

    return 0;
}