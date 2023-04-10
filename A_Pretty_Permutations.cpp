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
        vector<int>v;
        vector<int>v2;
        v2.push_back(3);
        v2.push_back(1);
        v2.push_back(2);
        if(n%2!=0 && n==3){
            for(int i=0;i<n;i++) cout<<v2[i]<<" ";
            cout<<endl;
            continue;
        }
        else if(n%2!=0 && n!=3){
            for(int i=4;i<=n;i++) v2.push_back(i);
            for(int i=3;i<n-1;i=i+2) swap(v2[i],v2[i+1]);
            
        }   
        else{
            for(int i=1;i<=n;i++) v.push_back(i);
            for(int i=0;i<n-1;i+=2) swap(v[i],v[i+1]);
        }

        if(n%2==0){
            for(int i=0;i<n;i++) cout<<v[i]<<" ";
            cout<<endl;
        }else{
            for(int i=0;i<n;i++) cout<<v2[i]<<" ";
            cout<<endl;
        }
    }

    return 0;
}