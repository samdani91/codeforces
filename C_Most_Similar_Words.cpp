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

    int t,n,s,diff;
    cin>>t;
    while(t--){
        int ans=INT32_MAX;
        vector<string>v;
        cin>>n>>s;
        loop{
            string str;
            cin>>str;
            v.push_back(str);
        }
        for(int i=0;i<v.size();i++){
            string temp=v[i];
            for(int j=i+1;j<v.size();j++){
                diff=0;
                string temp2=v[j];
                for(int k=0;k<s;k++){
                    diff+=abs(temp[k]-temp2[k]);
                }
                ans=min(ans,diff);

            }
        }
        cout<<ans<<endl;

    }

    return 0;
}