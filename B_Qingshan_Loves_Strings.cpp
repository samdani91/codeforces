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
        int n,m;cin>>n>>m;
        string s,t;
        cin>>s;
        cin>>t;

        bool flag=true,flag2=true;

        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                flag=false;
                break;
            }
        }

        if(flag){
            cout<<"Yes\n";
            continue;
        }

        for(int i=0;i<t.size()-1;i++){
            if(t[i]==t[i+1]){
                flag2=false;
                break;
            }
        }

        if(!flag2) {
            cout<<"No\n";
            continue;
        }

        bool ans=true;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                if(s[i]==t[0] or s[i+1]==t.back()){
                    ans=false;
                    break;
                }
            }
        }

        if(ans) cout<<"Yes\n";
        else cout<<"No\n";


    }

    return 0;
}