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

    int t,n,x,odd,even;
    cin>>t;
    while(t--){
        cin>>n>>x;
        odd=even=0;
        int arr[n+1];
        loop {
            cin>>arr[i];
            if(arr[i]%2==0) even++;
            else odd++;
        }

        if(odd==0) cout<<"No"<<endl;
        else{
            x--;odd--;
            while(x>0){
                if(odd>=2 and x>=2) x-=2,odd-=2;
                else if(even) even--,x--;
                else break;
            }
            if(!x) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }

    }

    return 0;
}