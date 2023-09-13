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

    int t,n,ballons;
    string s;
    map<char,int>mp;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        ballons=0;
        for(int i=0;i<s.size();i++){
            auto it=mp.find(s[i]);
            if(it==mp.end()){
                mp.insert(make_pair(s[i],1));
            }else{
                mp[s[i]]++;
            }
        }
        for(auto it:mp){
            if(it.second==1) ballons+=2;
            else  if(it.second>=1) ballons+=it.second+1;
        }
        cout<<ballons<<endl;
        mp.clear();

    }

    return 0;
}