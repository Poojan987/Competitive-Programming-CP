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

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    in(t);
    while (t--)
    {
       int x1,x2,y1,y2;
       cin>>x1>>y1>>x2>>y2;
        ll sum1=0,sum2=0;
        for(int i=x1){

        }
       for(int i=x1;i<=x2;i++){
           sum1+=(((i*(i+1))/2)+((y1*(y1+1))/2));
           out(sum1);
       }
       for(int j=y1;j<=y2;j++){
           sum2+=(((j*(j+1))/2)+((x2*(x2+1))/2));
           out(sum2);
       }
       out(sum1+sum2);
    }

    return 0;
}