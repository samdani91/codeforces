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

    int t,n,moves;
    bool flag;
    ll sum;
    cin>>t;
    while(t--){
        cin>>n;
        vll v;
        moves=sum=0;
        flag=false;
        for(int i=0;i<n;i++) {
            int num;
            cin>>num;
            v.push_back(num);
        }
        v.erase(remove(v.begin(),v.end(),0),v.end());
        
        for(ll ele:v){
            if(ele<0 && !flag){
                flag=true;
                moves++;
            }
            if(ele>0) flag=false;
            sum+= abs(ele);
        }

        cout<<sum<<" "<<moves<<endl;

    }

    return 0;
}