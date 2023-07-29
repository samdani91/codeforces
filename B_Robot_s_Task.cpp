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

    int n;
    cin>>n;
    int arr[n];
    int pick[n]={0};
    for(int &ele:arr) cin>>ele;

    int moves=0;
    int total=0;

    while(total<n){
        if(moves%2==0){
            for(int i=0;i<n;i++){
                if(!pick[i]  && arr[i]<=total){
                    pick[i]=1;
                    total++;
                }
            }
        }else{
            for(int i=n-1;i>=0;i--){
                if(!pick[i]  && arr[i]<=total){
                    pick[i]=1;
                    total++;
                }
            }
        }
        if(total<n) moves++;
    }

    cout<<moves;

    return 0;
}   