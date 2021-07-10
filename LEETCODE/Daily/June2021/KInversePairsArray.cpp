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
// segmented tree concept
int kInversePairs(int n, int k)
{
    vector<int> prog(k + 1, 0);
    int mod = 1e9 + 7;
    unordered_map<int,int>m;
    unordered_set<int>s;
    for (int i = 1; i <= n; i++)
    {
        m[i]=i++;
        vector<int> yeh(k + 1, 0);
        yeh[0] = 1;
        for (int j = 1; j <= k; j++)
        {
            long long cur = (prog[j] + mod - ((j - i) >= 0 ? prog[j - i] : 0)) % mod;
            m[cur+1]=cur;

            yeh[j] = (yeh[j - 1] + cur) % mod;
            s.insert(yeh[j]);
        }
        prog = yeh;
    }


    return ((prog[k] + mod - (k > 0 ? prog[k - 1] : 0)) % mod)%mod;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
}