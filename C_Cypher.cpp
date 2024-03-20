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
    
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int &ele:arr) cin>>ele;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            string s;cin>>s;

            for(int j=0;j<x;j++){
                if(s[j]=='D'){
                    if(arr[i]==9) arr[i]=0;
                    else arr[i]++;
                }else{
                    if(arr[i]==0) arr[i]=9;
                    else arr[i]--;
                }
            }
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}