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

    int t,n,evn,odd,right;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        evn=0,odd=0,right=0;
        for(int &ele:arr) cin>>ele;

        for(int i=0;i<n;i++){
            if(i%2==0){
                if(arr[i]%2==0) right++;
                else odd++;
            }else if(i%2==1){
                if(arr[i]%2==1) right++;
                else evn++;
            }
        }

        if(right==n) cout<<0<<endl;
        else if(odd==evn) cout<<odd<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}