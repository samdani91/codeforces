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
#define  debug(x)               cerr<<#x<< <<x<<endl;
#define  loop                   for(ll i=1; i<=n; i++)
#define  all(a)                 (a).begin(), (a).end()
#define  rall(a)                (a).rbegin(), (a).rend()
#define  mem(a, b)              memset(a, b, sizeof(a))
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)))
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)))

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

const int N=1e5+10;
const int M=1e9+7;

bool isPrime(ll n){
    for(ll i=2;i<=n/2;i++){
        if(n%i==0) return false;
    }
    return true;
}


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        vector<ll> result;
        if (n <= 4) {
            result.push_back(-1); 
        }else{
            for (ll i = 2; i <= n; i += 2) {
                result.push_back(i);
            }
            
            for (ll i = 1; i <= n; i += 2) {
                result.push_back(i);
            }
        }

        ll idx = n/2;
        ll lastEven = idx-1;
        ll firstODD = idx;
        bool flag=false;

        if(isPrime(result[idx]+result[idx-1])){
            for(;idx<n;idx++){
                if(!isPrime(result[lastEven]+result[idx])){
                    swap(result[firstODD],result[idx]);
                    flag = true;
                    break;
                }
            }
            if(!flag){
            cout<<-1<<endl;
            continue;
        }
        }



        if (result[0] == -1) {
            cout << -1 << endl;
        } else {
            for (ll num : result) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}