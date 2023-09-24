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

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vll w;
        ll sum=0;
        ll temp=0;
        ll temp2=0;
        for(int i=1;i<=n;i++){
            w.push_back(1<<i);
            sum+=(1<<i);
        }
        for(int i=0;i<n/2 - 1;i++){
            temp+=w[i];
        }
        temp+=w[w.size()-1];
        temp2=sum-temp;

        cout<<abs(temp-temp2)<<endl;

    }

    return 0;
}