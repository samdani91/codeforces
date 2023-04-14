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

    int t,x,y,r,l,u,d;
    string s;
    cin>>t;
    while(t--){
        cin>>x>>y;
        cin>>s;
        r=l=u=d=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R') r++;
            else if(s[i]=='L') l++;
            else if(s[i]=='D') d++;
            else u++;
        }
        if(x>=0 && y>=0){
            if(r>=x && u>=y) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else if(x>=0 && y<=0){
            if(r>=x && d>=abs(y)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else if(x<=0 && y>=0){
            if(l>=abs(x) && u>=y) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else if(x<=0 && y<=0){
            if(l>=abs(x) && d>=abs(y)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }

    return 0;
}