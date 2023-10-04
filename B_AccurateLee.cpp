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
    cin>>t;
    while(t--){
        cin>>n;
        string s;cin>>s;

        bool inc=true;
        int i=0;

        while(s[i]){
            if(s[i]=='1' and s[i+1]=='0'){
                inc=false;
                break;
            }
            i++;
        }
        
        if(inc) {
            cout<<s<<endl;
            continue;
        }

        int count1,count2;
        count1=count2=0;

        i=0;
        while(s[i++]!='1') count1++;

        i=s.size()-1;
        while(s[i--]!='0') count2++;

        for(i=1;i<=count1+1;i++) cout<<'0';
        for(i=1;i<=count2;i++) cout<<'1';

        cout<<endl;
        
    }

    return 0;
}