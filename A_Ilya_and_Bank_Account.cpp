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

    ll n;
    cin>>n;
    if(n>0) cout<<n;
    else{
        int temp=n;
        int last=abs(temp%10);
        int temp2=temp/10;
        int beforeLast=abs(temp2%10);

        if(last>beforeLast){
            cout<<temp2;
        }else{
            string s=to_string(temp);
            s[s.size()-2]=s[s.size()-1];
            s[s.size()-1]='\0';
            temp=stoi(s);
            cout<<temp;
        }
        

    }

    return 0;
}