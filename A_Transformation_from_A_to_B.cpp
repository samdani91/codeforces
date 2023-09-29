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

    int a,b;
    cin>>a>>b;

    bool flag=true;

    vector<int>ans;

    while(b>=a){

        if(b==a){
            ans.push_back(a);
            break;
        }
        int last=b%10;
        if(last==1){
            ans.push_back(b);
            b/=10;
        }
        else if(last%2==0){
            ans.push_back(b);
            b/=2;
        }else{
            flag=false;
            break;
        }

        
    }

    if(!flag or b<a) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<ans.size()<<endl;
        reverse(ans.begin(),ans.end());
        for(auto it:ans) cout<<it<<" ";
        cout<<endl;
    }

    return 0;
}