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


vector<int> rabinkarp(string T,string P,int d,int q)
{
    int n=T.size();
    int m=P.size();
    int h=1;
    int p,t;
    p=t=0;

    for(int i=0;i<m-1;i++) h= (h*d) % q;

    for(int i=0;i<m;i++){
        p=(p*d + P[i])%q;
        t=(t*d + T[i])%q;
    }
    vector<int>idx;

    for(int s=0;s<=n-m;s++){
        if(p==t){
            for(int i=0;i<m;i++){
                if(T[s+i]!=P[i]) break;
                if(i==m-1){
                    idx.push_back(s);
                }
            }
        }
        if(s<n-m){
            t=(d*(t-T[s]*h) + T[s+m])%q;
            if(t<0) t+=q;
        }
    }
    return idx;

}

int main()
{

    string s;
    cin>>s;
    int d=36;
    int q=13;


    vector<int>ab,ba;

    ab=rabinkarp(s,"AB",d,q);
    ba=rabinkarp(s,"BA",d,q);

    bool flag=false;

    for(int i=0;i<ab.size();i++){
        for(int j=0;j<ba.size();j++){
            if(ab[i]+1!=ba[j] and ba[j]+1!=ab[i]){
                flag=true;
                break;
            }
        }
    }

    if(flag and (ab.size()!=0 and ba.size()!=0)) cout<<"YES";
    else cout<<"NO";

    return 0;
}