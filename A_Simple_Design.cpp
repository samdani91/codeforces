#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll digit_Sum(int n);

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        ll sum = digit_Sum(x);
        while (sum % k != 0)
        {
            x++;
            sum = digit_Sum(x);
        }
        cout<<x<<endl;
    }

    return 0;
}

ll digit_Sum(int n)
{
    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}