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

    int test,n,f,s,t;
    cin>>test;
    while(test--){
        cin>>n;
        f=s=t=0;
        set<string>one,two,three;
        string str;
        for(int i=0;i<n;i++){
            cin>>str;
            one.insert(str);
        }
        for(int i=0;i<n;i++){
            cin>>str;
            two.insert(str);
        }
        for(int i=0;i<n;i++){
            cin>>str;
            three.insert(str);
        }
        
        for(auto it:one){
            auto find=two.find(it);
            auto find2=three.find(it);
            if(find!=two.end() && find2==three.end() ){
                f+=1;
                s+=1;
                two.erase(it);
            }else if(find==two.end() && find2!=three.end() ){
                f+=1;
                t+=1;
                three.erase(it);
            }else if(find==two.end() && find2==three.end() ){
                f+=3;
            }else{
                two.erase(it);
                three.erase(it);
            }
        }

        for(auto it:two){
            auto find=one.find(it);
            auto find2=three.find(it);
            if(find!=one.end() && find2==three.end() ){
                f+=1;
                s+=1;
            }else if(find==one.end() && find2!=three.end() ){
                s+=1;
                t+=1;
                three.erase(it);
            }else if(find==one.end() && find2==three.end() ){
                s+=3;
            }
        }

        for(auto it:three){
            auto find=two.find(it);
            auto find2=one.find(it);
            if(find!=two.end() && find2==one.end() ){
                t+=1;
                s+=1;
            }else if(find==two.end() && find2!=one.end() ){
                f+=1;
                t+=1;
            }else if(find==two.end() && find2==one.end() ){
                t+=3;
            }
        }

        cout<<f<<" "<<s<<" "<<t<<endl;

    }

    return 0;
}