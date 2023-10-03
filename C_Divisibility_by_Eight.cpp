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

    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if((s[i]-'0')%8==0){
            cout<<"YES"<<endl<<s[i];
            return 0;
        }
    }

    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            int temp=(s[i]-'0')*10+ (s[j]-'0');
            if(temp%8==0){
                cout<<"YES"<<endl<<temp;
                return 0;
            }
        }
    }

    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            for(int k=j+1;k<s.size();k++){
                int temp=(s[i]-'0')*100+ (s[j]-'0')*10+s[k]-'0';
                if(temp%8==0){
                    cout<<"YES"<<endl<<temp;
                    return 0;
                }
            }
        }
    }

    cout<<"NO";

    return 0;
}