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
#define  loop                   for(ll i=0; i<n; i++)
#define  all(a)                 (a).begin(), (a).end()
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)));
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)));

int main()
{

    int t,n,odd,even;
    cin>>t;
    while(t--){
        cin>>n;
        odd=even=0;
        vll v(n);
        loop{
            cin>>v[i];
            if(v[i]&1) odd++;
            else even++;
        }
        if(odd%2!=even%2) cout<<"NO"<<endl;
        else{
            if(odd%2==0 and even%2==0) cout<<"YES"<<endl;
            else if(odd&1 and even&1){
                sort(v.begin(),v.end());
                bool diffone=false;
                for(int i=1;i<n;i++){
                    if(v[i]-v[i-1]==1){
                        diffone=true;
                        break;
                    }
                }
                if(diffone) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}