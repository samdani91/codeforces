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
#define  debug(x)              cerr<<#x<<" "<<x<<endl;
#define  loop                   for(int i=1; i<=n; i++)
#define  all(a)                 (a).begin(), (a).end()
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)));
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)));

int main()
{

    int n,k,i=0;
    cin>>n>>k;

    int arr[n],arr2[n];
    for(int &ele:arr) cin>>ele;
    for(int &ele:arr2) cin>>ele;

    vector<pair<int,pair<int,int>>>prod;

    for(i=0;i<n;i++){
        prod.push_back(make_pair(arr[i]-arr2[i],make_pair(arr[i],arr2[i])));
    }
    sort(prod.begin(),prod.end());
    ll ans=0;
    i=0;
    while(i<n){
        if(i>=k && prod[i].first>=0) break;
        ans+= (ll) prod[i].second.first;
        i++;
    }
    while(i<n){
        ans+= (ll) prod[i].second.second;
        i++;
    }
    cout<<ans;

    return 0;
}