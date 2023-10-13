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
#define loop for (ll i = 1; i <= 3; i++)
#define all(a) (a).begin(), (a).end()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)));
#define max4(a, b, c, d) max(a, max(b, max(c, d)));

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        vll v;
        loop
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        if (v[0] == v[1] and v[1] == v[2] and v[0] == v[2])
            cout << "YES" << endl;
        else
        {
            bool flag;
            for (int i = 0; i < 3; i++)
            {
                flag = true;
                sort(v.begin(), v.end());
                v[v.size() - 1] -= v[0];
                v.push_back(v[0]);
                for (int i = 1; i < v.size(); i++)
                {
                    if (v[i] != v[i - 1])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }

            if (flag)
            {
                cout << "YES" << endl;
                continue;
            }

            for (int i = 1; i < v.size(); i++)
            {
                if (v[i] != v[i - 1])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}