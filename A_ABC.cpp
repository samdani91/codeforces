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

vector<int> prefixArray(string p)
{
    int n=p.size();
    vector<int>prefix(n,0);

    int i,j=0;
    for(i=1;i<n;){
        if(p[i]==p[j]){
            prefix[i]=j+1;
            j++;
            i++;
        }else{
            if(j!=0){
                j=prefix[j-1];
            }else{
                prefix[i]=0;
                i++;
            }
        }
    }
    return prefix;
}

bool KMP(string s,string p)
{
    vector<int>prefix=prefixArray(p);
    int i,j;
    i=j=0;

    int n=s.size();
    int m=p.size();

    while(i<n and j<m){
        if(s[i]==p[j]){
            i++;j++;
        }
        else{
            if(j!=0){
                j=prefix[j-1];
            }else{
                i++;
            }
        }
    }

    if(j==m) return true;
    else return false;

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;

        bool one=KMP(s,"00");
        bool two=KMP(s,"11");
        bool three=KMP(s,"010");
        bool four=KMP(s,"101");

        if(one or two or three or four) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    

    return 0;
}