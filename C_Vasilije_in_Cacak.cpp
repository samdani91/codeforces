#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef string str;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<pair<ll, ll>> vpl;
typedef set<ll> sll;
typedef map<ll, ll> mll;
typedef pair<int, int> pint;
typedef pair<ll, ll> pll;
double pi = acos(-1.0);
#define debug(x) cerr << #x < < < < x << endl;
#define loop for (ll i = 1; i <= n; i++)
#define all(a) (a).begin(), (a).end()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)));
#define max4(a, b, c, d) max(a, max(b, max(c, d)));

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;

        if (k > x)
        {
            cout << "NO" << endl;
            continue;
        }

        ll sum = k * (k + 1) / 2;

        ll sum2 = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;

        if (x >= sum && x <= sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
