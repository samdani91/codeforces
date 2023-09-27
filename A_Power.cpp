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

const int N = 1e9;

int main()
{
    freopen("pow.in", "r", stdin);
    ofstream output("pow.out");
    int a, b;
    cin >> a >> b;
    if(a==1){
        output<<1;
        return 0;
    }
    if (a == N and b > 1)
    {
        output << -1;
    }
    else
    {
        ll ans = 1;
        while (b)
        {
            ans*=a;
            b--;
            if(ans>N) break;
        }

        if (abs(ans) > N)
            output << -1;
        else
            output << ans;
    }

    return 0;
}