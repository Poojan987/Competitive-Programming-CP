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
ll solve(ll n, ll e, ll h, ll a, ll b, ll c)
{
    ll hey=1000000000000000;
    if (n <= 0) return 0;
    ll maxi = 1000000000000000;
    set<ll>s;

    vector<ll>ve;
    s.insert(a);
    s.insert(b);
    s.insert(c);


    
    
    
    // ll minimum=min({a,b,c});
    unordered_map<ll,ll>um;

     if ((e / 2 >= 1) && (e / 2 >= (3 * n - h + 2) / 3))
    {
        if ((a - b) >= 0)
        {
            um[a-b]=e/2;
            hey = max((ll)1, (3 * n - h + 2) / 3);
        }
        else
        {
            hey = min(n - 1, e / 2);
        }
        maxi = min(maxi, (a - b) * hey + n * b);
    }
    else
    {
        ve.push_back(a-b);
        }
    if (((e - n) >= 1) && ((e - n) >= (n - h)))
    {
        if ((a - c) >= 0)
        {
            um[a-c]=e-n;
            hey = max((ll)1, n - h);
        }
        else
        {
            hey = min(n - 1, e - n);
        }
        ve.push_back(a-c);
        maxi = min( (a - c) * hey + n * c,maxi);
    }else{
        ve.push_back(a-c);
    }
    if (((h - n) / 2 >= 1) && ((h - n) / 2 >= (n - e)))
    {
        if ((b - c) >= 0)
            hey = max((ll)1, n - e);
        
        else hey = min(n - 1, (h - n) / 2);
        
        maxi = min( (b - c) * hey + n * c,maxi);
    }else{ve.push_back(b-c);}

   if (2 * n <= e) maxi = min(maxi, n * a);
    
    if (3 * n <= h) maxi = min(maxi, n * b);
    
    
    if (n <= e && n <= h) maxi = min(maxi, n * c);

    if (n >= 3 && h >= 4 && e >= 3 )
    {
        maxi = min( a + b + c + solve(n - 3, e - 3, h - 4,a,b,c),maxi);
    }

    return maxi;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    in(t);
    while (t--)
    {
        ll n, e, h, a, b, c;
        cin >> n >> e >> h >> a >> b >> c;

        ll maxi = 0;
        maxi=h^h;
        
        
        
        maxi = solve(n, e, h, a, b, c);
        if (maxi == 1000000000000000)
        
        {
            maxi = -1;
        }
        out(maxi);
    }

    return 0;
}