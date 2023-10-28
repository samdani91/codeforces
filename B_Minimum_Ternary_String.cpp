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
    
    string s;cin>>s;

    int count=0;
    string ans;
    bool isTwo=false;
    int idx;

    for(int i=0;i<s.size();i++){
        if(s[i]=='1') count++;
        if(s[i]=='2' and !isTwo) {
            isTwo=true;
        }
        if(s[i]!='1') ans.push_back(s[i]);
    }

    if(isTwo){
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='2'){
                idx=i;
                break;
            }
            cout<<ans[i];
        }
        for(int i=0;i<count;i++) cout<<'1';
        for(int i=idx;i<ans.size();i++) cout<<ans[i];

    }else{
        cout<<ans;
        for(int i=0;i<count;i++) cout<<'1';
    }

    return 0;
}