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

    int t,n,m,count;
    cin>>t;
    while(t--){
        count=0;
        cin>>n>>m;
        int arr[n],brr[m];
        for(int &ele:arr) cin>>ele;
        for(int &ele:brr) cin>>ele;

        sort(arr,arr+n);
        sort(brr,brr+m);

        int i = 0, j = 0;
        while (i < n && j < m) {
            if (arr[i] < brr[j])
                 i++;
            else if (brr[j] < arr[i])
                 j++;
            else {
                count=1;
                cout<<"YES"<<endl;
                cout<<1<<" "<<arr[i]<<endl;
                break;
            }
     
        }

        if(count!=1) cout<<"NO"<<endl;

    }

    return 0;
}