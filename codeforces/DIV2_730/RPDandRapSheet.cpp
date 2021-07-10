#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <stddef.h>
#include <stdlib.h>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <string>
#include <ctype.h>
#include <queue>
// #pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;

#define f(abcd, n) for (int abcd = 0; abcd < n; abcd++)
#define in(n) cin >> n;
#define print(n) cout << n;
#define out(n) cout << n << "\n";
long long int cnt = 0;
int mod = 1000000007;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    in(t);
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int tp1 = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            int tp2 = tp1 ^ i;
            tp1 ^= tp2;
            // cout<<tp1<<" "<<tp2<<"\n";
            cout << tp2 << "\n";
            int c;
            in(c);
            if (c == 1)
                break;
        }
    }
}
