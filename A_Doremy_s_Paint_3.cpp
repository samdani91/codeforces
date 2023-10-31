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
#define  loop                   for(ll i=0; i<n; i++)
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
        int n;cin>>n;
        ll arr[n];
        map<ll,ll>mp;

        loop{
            cin>>arr[i];
            mp[arr[i]]++;
        }

        if(n==2){
            cout<<"Yes"<<endl;
            continue;
        }
        if(mp.size()==1){
            cout<<"Yes"<<endl;
            continue;
        }
        if(mp.size()>2){
            cout<<"No"<<endl;
            continue;
        }
        bool flag=true;
        if(n%2==0){
            for(auto it:mp){
                if(it.second & 1){
                    flag=false;
                    break;
                }
            }
            if(flag) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }else{
            vll v;
            for(auto it:mp){
                v.push_back(it.second);
            }

            if(abs(v[0]-v[1])==1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }


    }

    return 0;
}