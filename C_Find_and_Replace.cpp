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

    int t,n;
    bool flag;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        flag=true;
        char temp=s[0];
        for(int i=0;i<s.size();i++){
            if(s[i]==temp){
                s[i]='0';
            }
        }
        for(int i=1;i<s.size();i++){
            temp=s[i];
            if(s[i]!='0' && s[i]!='1' &&  s[i-1]=='0'){
                for(int j=i;j<s.size();j++){
                    if(s[j]==temp) s[j]='1';
                }
            }
            else if(s[i]!='0' && s[i]!='1' && s[i-1]=='1'){
                for(int j=i;j<s.size();j++){
                    if(s[j]==temp) s[j]='0';
                }
            }
        }
        if(s.size()==1) cout<<"YES"<<endl;
        else{
            for(int i=1;i<s.size();i++){
                if(s[i]==s[i-1]){
                    flag=false;
                    break;
                }
            }

            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}