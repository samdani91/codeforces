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
        string a,b;
        cin>>a>>b;

        int n=a.size();
        int m=b.size();

        bool flag=true;

        int i=n-1;

        for(int j=m-1;j>=0;j--){
            while(i>=0 and a[i]!=b[j]){
                i-=2;
            }
            if(i<0){
                flag=false;
                break;
            }
            i-=1;
        }

        flag ? cout<<"YES"<<endl : cout<<"NO"<<endl;

    }
    

    return 0;
}

