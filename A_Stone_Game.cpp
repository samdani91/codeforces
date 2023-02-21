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

    int t,n,moves1,moves2,moves3,moves4,max_pos,idx,idx2,min_pos;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v(n);
        moves1=0;
        for (int &ele : v) {
            cin >> ele;
        }

        max_pos=max_element(v.begin(),v.end())-v.begin();
        min_pos=min_element(v.begin(),v.end())-v.begin();

        cout << min({
            max(max_pos, min_pos) + 1,
            (n - 1) - min(max_pos, min_pos) + 1,
            (n - 1) - max_pos + min_pos + 2,
            (n - 1) - min_pos + max_pos + 2
        }) << endl;


        

    }

    return 0;
}