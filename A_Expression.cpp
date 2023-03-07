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
    //#define  max5(a,b,c,d)          max(max(a,max(b,max(c,d))));
     
    int main()
    {
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;

        ll ans1,ans2,ans3,ans4,ans5;
        ans1=a+(b*c);
        ans2=a*(b+c);
        ans3=a*b*c;
        ans4=(a+b)*c;
        ans5=a+b+c;

        int temp=max4(ans1,ans2,ans3,ans4);
        cout<<max(ans5,temp);


     
        return 0;
    }