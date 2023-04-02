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
#define  debug(x)              cerr<<#x<<" "<<x<<endl;
#define  loop                   for(ll i=1; i<=n; i++)
#define  all(a)                 (a).begin(), (a).end()
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)));
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)));

int main()
{
    int n,s,i,j;
    bool flag=true;
    cin>>s>>n;
    int a[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j][0]<a[i][0])
            {
                swap(a[j][0],a[i][0]);
                swap(a[j][1],a[i][1]);

            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(s>a[i][0])
            s+=a[i][1];
        else 
        {
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";

}