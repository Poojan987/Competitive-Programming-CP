#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
const lli mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n, m, curr, ticket;
    cin >> n >> m;
    multiset<lli, greater<int>> h;

    while (n--)
    {
        cin >> ticket;
        h.insert(ticket);
    }

    while (m--)
    {
        cin >> curr;
        auto it = h.lower_bound(curr);
        if (it == h.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *it << endl;
            h.erase(it);
        }
    }
    return 0;
}