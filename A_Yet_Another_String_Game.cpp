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

    int  t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        for(int i=0;i<s.size();i+=2){
            if(s[i]!='a') {
                s[i]='a';
            }
            else {
                s[i]='b';
            }
            if(s[i+1]!='z') {
                s[i+1]='z';
            }
            else {
                s[i+1]='y';
            }

        }
        cout<<s<<endl;
    }

    return 0;
}