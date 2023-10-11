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
    
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        set<int>st;
        bool ans=false;
        for(int i=1;i<=n/2;i++){
            if(i%3==0) continue;
            for(int j=i+1;j<=n/2;j++){
                if(j%3==0 ) continue;
                else{
                    int z=n-i-j;
                    if(z%3!=0 and i!=z and j!=z){
                        st.insert(i);
                        st.insert(j);
                        st.insert(z);
                        ans=true;
                        break;
                    }
                }
            }
            if(ans) break;
        }
        if(!ans) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(auto it:st) cout<<it<<" ";
            cout<<endl;
        }

    }


    return 0;
}