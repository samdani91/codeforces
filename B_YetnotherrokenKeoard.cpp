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
#define loop for (ll i = 1; i <= n; i++)
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
        string s;
        cin >> s;
        stack<int>idx,idx2;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 65 and s[i] <= 90)
            {
                if (s[i] == 'B' and !idx.empty())
                    idx.pop();
                else if(s[i] == 'B' and idx.empty())
                    continue;
                else{
                    idx.push(i);
                }
            }
            else
            {
                if (s[i] == 'b' and !idx2.empty())
                    idx2.pop();
                else if(s[i] == 'b' and idx2.empty())
                    continue;
                else{
                    idx2.push(i);
                }

            }
        }

        vector<int>ind;
        while(!idx.empty()){
            ind.push_back(idx.top());
            idx.pop();
        }
        while(!idx2.empty()){
            ind.push_back(idx2.top());
            idx2.pop();
        }

        sort(ind.begin(),ind.end());

        string ans ="";

        for(int i=0;i<ind.size();i++){
            ans+=s[ind[i]];
        }
        cout<<ans<<endl;
    }

    return 0;
}