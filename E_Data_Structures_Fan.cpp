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

    int t,n,q;
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        ll prefix[n][2],suffix[n][2];
        ll temp,temp2;
        temp=temp2=0;

        string s;
        cin>>s;  

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                temp^=arr[i];
            }else{
                temp2^=arr[i];
            }
            prefix[i][0]=temp;
            prefix[i][1]=temp2;
        }


        cin>>q;
        while(q--){
            int a,b,c;
            char ch;
            cin>>a;
            ll tempXor=0;
            if(a==1) {
                cin>>b>>c;
                b--;c--;

                ll r=prefix[c][0];
                if(b) r^=prefix[b-1][0];

                ll r2=prefix[c][1];
                if(b) r2^=prefix[b-1][1];

                temp^=r;
                temp^=r2;

                temp2^=r2;
                temp2^=r;

            }else{
                cin>>b;
                if(b==1) cout<<temp2<<" ";
                else cout<<temp<<" ";
            }

        }
        cout<<endl;
    }

    return 0;
}