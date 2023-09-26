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

    int t,res;
    cin>>t;

    int score[10][10] = {
                        {1,1,1,1,1,1,1,1,1,1},
                        {1,2,2,2,2,2,2,2,2,1},
                        {1,2,3,3,3,3,3,3,2,1},
                        {1,2,3,4,4,4,4,3,2,1},
                        {1,2,3,4,5,5,4,3,2,1},
                        {1,2,3,4,5,5,4,3,2,1},
                        {1,2,3,4,4,4,4,3,2,1},
                        {1,2,3,3,3,3,3,3,2,1},
                        {1,2,2,2,2,2,2,2,2,1},
                        {1,1,1,1,1,1,1,1,1,1}
    };

    while(t--){
        string s[11];
        res=0;
        for(int i=0;i<10;i++){
            cin>>s[i];
        }
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(s[i][j]=='X'){
                    res+=score[i][j];
                }
            }
        }
        cout<<res<<endl;
    }

    return 0;
}