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
    
    int n;cin>>n;
    vll v,a,b;
    loop{
        ll x;cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<n-1;i++){
        ll x;cin>>x;
        a.push_back(x);
    }
    
    for(int i=0;i<n-2;i++){
        ll x;cin>>x;
        b.push_back(x);
    }

    sort(all(v));
    sort(all(a));
    sort(all(b));

    int temp=-1,tmp2=-1;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]!=a[i]){
            temp=v[i];
            cout<<v[i]<<endl;
            break;
        }
    }

    if(temp==-1){
        cout<<v.back()<<endl;
    }

    for(int i=0;i<a.size()-1;i++){
        if(a[i]!=b[i]){
            tmp2=a[i];
            cout<<a[i]<<endl;
            break;
        }
    }

    if(tmp2==-1){
        cout<<a.back()<<endl;
    }

    return 0;
}