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

bool can_collect(vector<ll>& a, vector<ll>& b, ll k, int pos) {
    int n = a.size();
    int m = b.size();
    vector<ll> temp;
    
    // Create new garden with flower of beauty k at position pos
    for (int i = 0; i < n; i++) {
        if (i == pos) temp.push_back(k);
        temp.push_back(a[i]);
    }
    if (pos == n) temp.push_back(k);
    
    // Try to collect m flowers
    int j = 0;
    for (ll beauty : temp) {
        if (j < m && beauty >= b[j]) {
            j++;
        }
    }
    return j >= m;
}

bool can_collect_without_new(vector<ll>& a, vector<ll>& b) {
    int m = b.size();
    int j = 0;
    for (ll beauty : a) {
        if (j < m && beauty >= b[j]) {
            j++;
        }
    }
    return j >= m;
}

ll solve() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    // Check if possible without adding a flower
    if (can_collect_without_new(a, b)) {
        return 0;
    }
    
    // Binary search for minimum k
    ll left = 1, right = 1e9 + 1;
    ll ans = -1;
    
    while (left <= right) {
        ll mid = left + (right - left) / 2;
        bool possible = false;
        
        // Try placing flower at all positions
        for (int pos = 0; pos <= n; pos++) {
            if (can_collect(a, b, mid, pos)) {
                possible = true;
                break;
            }
        }
        
        if (possible) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << '\n';
    }
    
    return 0;
}