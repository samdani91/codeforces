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
    
    int n;cin>>n;
    int arr[n+1];
    int res[n+1];
    loop cin>>arr[i];

    sort(arr+1,arr+n+1);


    int i=n;
    for(int j=2;j<=n;j+=2){
        res[j]=arr[i];
        arr[i]=-1;
        i--;
    }
    i=1;
    for(int j=1;j<=n;j+=2){
        if(arr[i]!=-1){
            res[j]=arr[i++];
        }
    }

    loop cout<<res[i]<<" ";

    return 0;
}