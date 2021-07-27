

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

#define f(abcd, sz) for (int abcd = 0; abcd < sz; abcd++)
#define in(sz) cin >> sz;
#define print(sz) cout << sz;
#define out(sz) cout << sz << "\n";

class Solution
{
public:
    string pushDominoes(string dominoes)
    {
        int n = dominoes.size();

        vector<int> left(n), right(n);
        int op1 = 0;

        for (int i = 0; i < n; i++)
        {

            if (dominoes[i] == 'R')
            {
                op1 = 1;
                left[i] = op1;
            }
            else if (dominoes[i] == '.' && op1 >= 1)
            {
                op1++;
                left[i] = op1;
            }
            else
            {
                op1 = 0;
            }
        }
        op1 = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (dominoes[i] == 'L')
            {
                op1 = 1;
                right[i] = op1;
            }
            else if (dominoes[i] == '.' && op1 >= 1)
            {
                op1++;
                right[i] = op1;
            }
            else
            {
                op1 = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (left[i] == right[i])
            {
                continue;
            }
            else if (left[i] < right[i])
            {
                if (left[i] == 0)
                    dominoes[i] = 'L';
                else
                    dominoes[i] = 'R';
            }
            else
            {
                if (right[i] == 0)
                    dominoes[i] = 'R';
                else
                    dominoes[i] = 'L';
            }
        }
        return dominoes;
    }
}

int
main()
{

    int t;
    in(t);
    while (t--)
    {
    }

    return 0;
}