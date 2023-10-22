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
    
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;

        reverse(s.begin(),s.end());

        int zero=0;
        vll index;

        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                zero++;
                index.push_back(i+1);
            }
        }
        
        ll j=1,l=0;
        for(int i=0;i<index.size();i++){
            ll temp=index[i]-j;
            cout<<temp+l<<" ";
            l+=temp;
            j++;
        }
        for(int i=0;i<n-zero;i++) cout<<-1<<" ";
        cout<<endl;


    }

    return 0;
}