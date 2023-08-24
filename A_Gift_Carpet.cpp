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

    int t,n,m;
    bool v,ii,k,a;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        v=ii=k=a=false;
        char s[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>s[i][j];
            }
        }
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(s[i][j]=='v' && v==false){
                    v=true;
                    break;
                }
                if(v && !ii && s[i][j]=='i'){
                    ii=true;
                    break;
                }
                if(ii &&  !k && s[i][j]=='k'){
                    k=true;
                    break;
                }
                if(k && !a && s[i][j]=='a'){
                    a=true;
                    break;
                }
            }
        
        }
        if(v==false || ii==false || k==false || a==false)
        {
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        
        
    }

    return 0;
}