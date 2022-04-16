#include <iostream>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
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
bool sortbysec(const pair<ll, ll> &a,
               const pair<ll, ll> &b)
{
  return (a.second < b.second);
}
ll power(long long x, ll y, ll p)
{
  ll res = 1; // Initialize result

  x = x % p; // Update x if it is more than or
             // equal to p

  if (x == 0)
    return 0; // In case x is divisible by p;

  while (y > 0)
  {
    // If y is odd, multiply x with result
    if (y & 1)
      res = (res * x) % p;

    // y must be even now
    y = y >> 1; // y = y/2
    x = (x * x) % p;
  }
  return res;
}
string decToBinary(int n, int numBit)
{
  // array to store binary number
  int binaryNum[32];

  // counter for binary array
  int i = 0;
  while (n > 0)
  {

    // storing remainder in binary array
    binaryNum[i] = n % 2;
    n = n / 2;
    i++;
  }

  // printing binary array in reverse order
  string ans = "";
  for (int j = i - 1; j >= 0; j--)
  {
    char c = binaryNum[j] + '0';
    ans = ans + (c);
  }

  if (ans.size() < numBit)
  {
    int tp = numBit - ans.size();
    for (int i = 0; i < tp; i++)
    {
      ans = '0' + ans;
    }
  }
  return ans;
}
#define MAX 1000
int multiply(int x, int res[], int res_size);

long long int factorial(long long int n)
{
  if (n == 0)
    return 1;
  return ((n % 1000000007) * factorial(n - 1) % 1000000007) % 1000000007;
}
ll printDivisors(ll n)
{
  vector<ll> v;
  ll cnt = 0;
  // Note that this loop runs till square root
  for (ll i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      // If divisors are equal, print only one
      if (n / i == i)
      {
        // v.push_back(i);
        cnt++;
        // cout << " " << i;
      }

      else // Otherwise print both{
      {
        // v.push_back(i);
        //     v.push_back(n/i);
        // cout << " " << i << " " << n / i;
        cnt += 2;
      }
    }
  }
  return cnt;
}
int main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);
  int t;
  in(t)

      while (t--)
  {

    ll n;
    in(n)
        ll mod = 10e9 + 7;
    in(mod)
        ll factors = printDivisors(n);
    // (2^factors-1)%mod;

    // out( % mod)
    if ((power(2, factors, mod) - 1) % mod < 0)
    {
      out((power(2, factors, mod) - 1 + mod) % mod)
    }
    else
    {
      out(power(2, factors, mod) - 1)
    }
    // out((power(2, factors, mod) - 1 ) % mod);
  }
  return 0;
}