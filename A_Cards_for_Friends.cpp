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
/*
bool cut_sheet(int w,int h,int n,int size,int i){

    if(w%2!=0 && h%2!=0){
        if(size>=n) return true;
        else return false;
    }
    if(w%2==0){
        w=w/2;
        size = pow(2,i);
        i++;
        cut_sheet(w,h,n,size,i);
    }
    if(h%2==0){
        h=h/2;
        size = pow(2,i);
        i++;
        cut_sheet(w,h,n,size,i);      
    }
}
*/

int main()
{

    int t,w,h,n,size,i;
    cin>>t;
    while(t--){
        size=1,i=1;
        cin>>w>>h>>n;
        /*
        // TLE in recursion
        bool ans=cut_sheet(w,h,n,size,i);

        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        */
        
        while(h%2==0){
            h /=2;
            size=pow(2,i);
            i++;
        }
        while(w%2==0){
            w /= 2;
            size=pow(2,i);
            i++;
        }
        if(size>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}