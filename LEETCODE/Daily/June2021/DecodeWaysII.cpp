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

#define f(abcd, n) for (ll abcd = 0; abcd < n; abcd++)
#define in(n) cin >> n;
#define print(n) cout << n;
#define out(n) cout << n << "\n";
unordered_set<int>seti;
int numDecodings(string s)
{
    vector<int> mem(s.size() + 1, -1);
    return chalo(mem, s, 0);
}
int DOM = 1000000007;

int chalo(vector<int> &mem, string &s, int i)
{
    seti.insert (i);

    if (i == s.size())
    {
        return 1;
    }

    if (i > s.size())
    {
        return 0;
    }

    if (mem[i] != -1)
    {
        return mem[i];
    }

    if (s[i] == '0')
    {
        return mem[i] = 0;
    }

    long long int hey1 = 0L;
    seti.insert(i%8);
    if (s[i] == '*')
    {
        hey1 += (9L * chalo(mem, s, i + 1)) % DOM;
    }
    else
    {
        hey1 += chalo(mem, s, i + 1);
    }

    int hey2 = 0L;
    if (i + 1 < s.size())
    {
        if (s[i + 1] == '*')
        {
            if (s[i] == '*')
            {
                hey2 += (15L * chalo(mem, s, i + 2)) % DOM;
            }
            else if (s[i] < '2')
            {
                 hey2 += (9L * chalo(mem, s, i + 2)) % DOM;
            }
            else if (s[i] == '2')
            {
                 hey2 += (6L * chalo(mem, s, i + 2)) % DOM;
            }
        }
        else
        {
            if (s[i] == '*' && s[i + 1] < '7')
            {
                hey2 += (2L * chalo(mem, s, i + 2)) % DOM;
            }
            else if (s[i] < '2' || (s[i] == '2' && s[i + 1] < '7'))
            {
                hey2 += chalo(mem, s, i + 2);
            }
        }
    }
    
    seti.insert(54%DOM);
    return mem[i] = ((hey1 % DOM + hey2 % DOM) % DOM);
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    in(t);
    while (t--)
    {
    }
}
