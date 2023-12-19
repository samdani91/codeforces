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
        string s;cin>>s;
        vector<string>ans;
        int temp=s[1]-'0';
        if((8-temp)>0){
            for(int i=temp+1;i<=8;i++){
                string t=s[0]+to_string(i);
                ans.push_back(t);
            }
        }
        if(temp>1){
            for(int i=1;i<temp;i++){
                string t=s[0]+to_string(i);
                ans.push_back(t);
            }
        }
        char temp2=s[0];
        if(temp2>'a'){
            for(int i=1;i<=temp2-'a';i++){
                char z=s[0]-i;
                cout<<z<<s[1]<<endl;
                // string t=to_string(z)+s[1];
                // ans.push_back(t);
            }
        }
        if(temp2<'h'){
            for(int i=1;i<='h'-temp2;i++){
                char z=s[0]+i;
                cout<<z<<s[1]<<endl;
            }
        }
        for(auto it:ans) cout<<it<<endl;
    }


    return 0;
}