#include<bits/stdc++.h>
using namespace std;

typedef  long long int          ll;
typedef  long double            ld;
typedef  string                 str;
typedef  vector<ll>             vll;
typedef  vector<vector<ll>>     vvll;
typedef  vector<string>         vs;
typedef  vector<pair<ll, ll>>   vpl;
typedef  set<ll>                sll;
typedef  map<ll,ll>             mll;
typedef  pair<int,int>          pint;
typedef  pair<ll,ll>            pll;
double   pi = acos(-1.0);
#define  loop                   for(ll i=1; i<=n; i++)
#define  all(a)                 (a).begin(), (a).end()
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)));
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)));


const ll M=1e9+7;

vvll multiply(vvll &a,vvll &b)
{
    int n=a.size();
    vvll ans(n,vll(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                ans[i][j]= (ans[i][j]%M+((a[i][k]%M*b[k][j]%M)%M))%M;
            }
        }
    }
    return ans;
}

vvll matrixExp(vvll &a,ll n)
{
    if(n==0){
        int sz=a.size();
        vvll ans(sz,vll(sz,0));
        for(int i=0;i<sz;i++){
            ans[i][i]=1;
        }

        return ans;
    }

    if(n==1) return a;

    vvll temp=matrixExp(a,n/2);
    vvll ans=multiply(temp,temp);

    if(n&1) ans=multiply(ans,a);


    return ans;

}

int main()
{

    ll n;cin>>n;

    vvll a={{0,1},{1,1}};

    vvll ans=matrixExp(a,n);

    cout<<ans[0][1];


    return 0;
}