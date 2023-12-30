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
#define  loop                   for(ll j=1; j<=3; j++)
#define  all(a)                 (a).begin(), (a).end()
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)));
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)));
#define  endl					"\n"
 
const int N=1e5+10;
const int M=1e9+7;

int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int t;cin>>t;

    while(t--){
    	loop{
    		vector<bool>arr(3,false);
    		string line;
    		cin>>line;
    		if(line.find("?")!=string::npos){
    			for(int i=0;i<line.size();i++){
    				if(line[i]!='?')arr[line[i]-65]=true;
    			}
    			for(int i=0;i<3;i++){
    				if(!arr[i]) printf("%c\n",65+i);
    			}

    		}
    	}
    }

 
    return 0;
}