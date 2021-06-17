
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

class Solution
{
public:
    int openLock(vector<string> &deadends, string target)
    {
        unordered_map<string,bool>m;
        for(int i=0;i<deadends.size();i++){
            m[deadends[i]]=true;
        }
        
        if (target == "0000")
            return 0;
        queue<int> q;
        q.push(0);
        bool visited[10000]{false};
        for (auto &d : deadends)
            visited[stoi(d)] = true;
        int fin = stoi(target);

        if (visited[0])
            return -1;

        for (int val = 1; q.size(); val++)
        {
            int siz = q.size();
            for (int i = 0; i < siz; i++)
            {

                int hey = q.front();
                q.pop();
                for (int j = 1; j < 10000; j *= 10)
                {
                    int cover = hey % (j * 10) / j,
                        masked = hey - (cover * j);


                    for (int k = 1; k < 10; k += 8)
                    {
                        int after = masked + (cover + k) % 10 * j;
                        if (visited[after])
                            continue;

                        if (after == fin)
                            return val;
                        
                        visited[after] = true;
                        q.push(after);
                    }
                }


            }


        }
        return -1;


    }
};