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

    int t,n,even,odd;
    cin>>t;
    while(t--){
        even=odd=0;
        cin>>n;
        int arr[n];
        for(int &ele:arr) {
            cin>>ele;
            if(ele%2==0) even++;
            else odd++;
        }
        if(odd%2!=0 && even%2==0) cout<<"YES"<<endl;
        else{
            if(odd>0 && even>0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }

    return 0;
}