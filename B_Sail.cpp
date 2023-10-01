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
{  //e(x+1,y),s(x,y-1),w(x-1,y),n(x,y+1)

    ll t,x,y,a,b;
    cin>>t>>x>>y>>a>>b;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.size();i++){

        if(x==a and y==b) break;
        if(s[i]=='E'){
            if(a>x){
                x++;
            }
        }else if(s[i]=='S'){
            if(b<y){
                y--;
            }
        }else if(s[i]=='N'){
            if(b>y){
                y++;
            }
        }else if(s[i]=='W'){
            if(a<x){
                x--;
            }
        }
        ans++;

    }

    if(x==a and y==b) cout<<ans;
    else cout<<-1;

    return 0;
}