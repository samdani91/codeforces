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

    int t,n,max,max2,count;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n],temp[n];
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            temp[i]=arr[i];
        }

        sort(temp,temp+n);

        for(int i=0;i<n;i++){
            if(arr[i]!=temp[n-1]){
                arr[i]=arr[i]-temp[n-1];
            }else{
                arr[i]=arr[i]-temp[n-2];
            }
        }

        for(int ele:arr) cout<<ele<<" ";
        cout<<endl;
    }

    return 0;
}