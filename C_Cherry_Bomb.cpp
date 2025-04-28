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

void solve() {
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    
    ll fixed_x = -1; 
    bool valid = true;
    for (int i = 0; i < n; i++) {
        if (b[i] != -1) {
            ll curr_x = a[i] + b[i];
            if (fixed_x == -1) {
                fixed_x = curr_x; 
            } else if (curr_x != fixed_x) {
                valid = false; 
            }
        }
    }

    if (!valid) {
        cout << 0 << endl;
        return;
    }

    
    ll min_x = 0, max_x = LLONG_MAX; 
    bool has_missing = false;
    for (int i = 0; i < n; i++) {
        if (b[i] == -1) {
            has_missing = true;
            
            
            min_x = max(min_x, a[i]);
            max_x = min(max_x, a[i] + k);
        }
    }

    if (!has_missing) {
        
        cout << (fixed_x != -1 ? 1 : 0) << endl;
        return;
    }

    
    if (fixed_x != -1) {
        if (fixed_x < min_x || fixed_x > max_x) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
        return;
    }

    
    if (min_x > max_x) {
        cout << 0 << endl;
    } else {
        cout << max_x - min_x + 1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}