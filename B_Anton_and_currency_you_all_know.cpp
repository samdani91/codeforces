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

    int even,odd;
    even=odd=0;

    for(char ele:s){
        int n=ele-'0';
        if(ele%2==0) even++;
        else odd++;
    }

    if(even==0){
        cout<<-1;
    }else{
        bool sw=false;
        int idx,last=s[s.size()-1]-'0';
        for(int i=0;i<s.size();i++){
            int n=s[i]-'0';
            if(n%2==0) idx=i;
            if(n%2==0 and n<last){
                sw=true;
                swap(s[i],s[s.size()-1]);
                break;
            }

        }
        if(!sw) swap(s[idx],s[s.size()-1]);
        cout<<s;
    }

    return 0;
}