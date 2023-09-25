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

    char c;
    cin>>c;
    string s;
    cin>>s;

    string f="qwertyuiop";
    string sc="asdfghjkl;";
    string t="zxcvbnm,./";


    if(c=='R'){
        for(int i=0;i<s.size();i++){
            if(f.find(s[i])!=string::npos){
                cout<<f[f.find(s[i])-1];
            }else if(sc.find(s[i])!=string::npos){
                cout<<sc[sc.find(s[i])-1];
            }else cout<<t[t.find(s[i])-1];
        }
    }else{
        for(int i=0;i<s.size();i++){
            if(f.find(s[i])!=string::npos){
                cout<<f[f.find(s[i])+1];
            }else if(sc.find(s[i])!=string::npos){
                cout<<sc[sc.find(s[i])+1];
            }else cout<<t[t.find(s[i])+1];
        }
    }

    return 0;
}