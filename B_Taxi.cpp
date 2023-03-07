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

    int n,one=0,two=0,three=0,four=0,ans=0;
    cin>>n;
    int arr[n];
    for(int &ele:arr) cin>>ele;

    for(int ele:arr){
        if(ele==1) one++;
        else if(ele==2) two++;
        else if(ele==3) three++;
        else four++;
    }

    ans+=four;

    if(three<one){
        ans+=three;
        one-=three;
        three=0;
    }else if(three>=one){
        ans+=one;
        three-=one;
        one=0;
    }

    if(three>0) ans+=three;

    if(two>0){
        ans+=two/2;
        two=two%2;
    }

    int rem=one+(two*2);
    if(rem<=4 && rem>0){
        ans+=1;
    }else if(rem%4!=0){
        ans+=(rem/4)+1;
    }else{
        ans+=rem/4;
    }


    cout<<ans;


    return 0;
}