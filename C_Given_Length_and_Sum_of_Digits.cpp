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
    
    int m,s;
    cin>>m>>s;

    if(s==0){
        if(m==1){
            cout<<0<<" "<<0;
        }
        else{
            cout<<-1<<" "<<-1;
        }
        return 0;
    }
    string high="";
    string low="";

    for(int i=0;i<m;i++){
        int digit=min(9,s);
        high.push_back('0'+digit);
        s-=digit;
    }

    if(s>0){
        cout<<-1<<" "<<-1;
        return 0;
    }
    for(int i=m-1;i>=0;i--){
        low.push_back(high[i]);
    }
    int i=0;
    while(low[i]=='0') i++;

    low[0]++;low[i]--;

    cout<<low<<" "<<high;


    return 0;
}