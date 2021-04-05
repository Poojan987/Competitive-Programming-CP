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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int *SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    int *ALLPRIMES = new int[n], count = 0;
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            ALLPRIMES[count] = p;
            count++;
        }
    }
    return ALLPRIMES;
}
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second > b.second);
}
bool sortByVal(const pair<int, double> &a,
               const pair<int, double> &b)
{
    return (a.second < b.second);
}

vector<int> adjacencyList[500000];
int visited[500000];

void dfs(int index)
{
    if (visited[index] == 0)
    {
        visited[index] = 1;
        for (int i = 0; i < adjacencyList[index].size(); i++)
        {
            if (visited[adjacencyList[index][i]] == 0)
            {
                dfs(adjacencyList[index][i]);
            }
        }
    }
}
// int solve(int n,int currN,int e,int h,ll cost,int a,int b,int c){

//     if(cost>=INT_MAX || (e<0 || h<0)) return INT_MAX;
//     if(currN==n) return cost;
//     return min({solve(n,currN+1,e-2,h,cost+a,a,b,c),solve(n,currN+1,e,h-3,cost+b,a,b,c),solve(n,currN+1,e-1,h-1,cost+c,a,b,c)}) ;
// }
string compare()
{
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    in(t);
    while (t--)
    {
        int r, c, x;
        cin >> r >> c >> x;
        ll a[r][c];
        ll b[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                in(a[i][j]);
            }
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                in(b[i][j]);
            }
        }

        int moreRow = 0, moreColumn = 0;
        if (r >= x)
            moreRow = 1;
        if (c >= x)
            moreColumn = 1;

        for (int i = 0; i < r; i++)
        {
            if (moreColumn == 0)
            {
                break;
            }
            else
            {
                for (int j = 0; j < c - x + 1; j++)
                {
                    if (!(a[i][j] == b[i][j]))
                    {

                        int diff = b[i][j] - a[i][j];
                        a[i][j] += diff;
                        for (int k = 1; k < x; k++)
                        {
                            a[i][j + k] += diff;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < c; i++)
        {
            if (moreRow == 0)
            {
                break;
            }
            else
            {
                for (int j = 0; j < r - x + 1; j++)
                {
                    if (!(a[j][i] == b[j][i]))
                    {

                        int diff = b[j][i] - a[j][i];
                        a[j][i] += diff;
                        for (int k = 1; k < x; k++)
                        {
                            a[j + k][i] += diff;
                        }
                    }
                }
            }
        }

        int f = 1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (a[i][j] != b[i][j])
                {
                    f = 0;
                    break;
                }
            }
            if (f == 0)
                break;
        }
        if (f == 1)
        {
            out("Yes");
        }
        else
        {
            out("No");
        }
    }

    return 0;
}