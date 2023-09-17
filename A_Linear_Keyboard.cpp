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

    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        map<char,int>mp;
        for(int i=0;i<a.size();i++){
            mp.insert(make_pair(a[i],i+1));
        }

        int time=0;
        int idx1,idx2;
        for(int i=1;i<b.size();i++){
            idx1=mp[b[i]];
            idx2=mp[b[i-1]];
            time+=abs(idx1-idx2);
        }
        cout<<time<<endl;
    }

    return 0;
}