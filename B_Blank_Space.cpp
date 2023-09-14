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

    int t,n,count1,count2;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>v;
        count1=count2=0;
        loop{
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==0 ){
                count2++;
            }
            if(v[i]==1){
                count1=max(count1,count2);
                count2=0;
            }
        }
        count1=max(count1,count2);
        cout<<count1<<endl;

    }

    return 0;
}