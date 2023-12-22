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
#define  endl					"\n"
 
const int N=1e9+10;

int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int t;cin>>t;
    while(t--){
    	int n,m,h;
    	cin>>n>>m>>h;

    	pair<int,ll>rudolf;
    	int rank=1;

    	for(int i=0;i<n;i++){
    		vll v;
    		pair<int,ll>temp;

    		for(int i=0;i<m;i++){
    			ll x;cin>>x;
    			v.push_back(x);
    		}
    		sort(v.begin(),v.end());

    		ll sum=0,pen=0,solved=0;

    		for(auto it:v){
    			if((sum+it)>h) break;
    			sum+=it;
    			pen+=sum;
    			solved++;
    		}

    		if(i){
    			temp=make_pair(solved,pen);
    			if(rudolf.first<temp.first) rank++;
    			else if(rudolf.first==temp.first and rudolf.second>temp.second) rank++;
    		}else{
    			rudolf=make_pair(solved,pen);
    		}
    	}
    	cout<<rank<<endl;
    }

 
    return 0;
}