#include <iostream>
#include <bits/stdc++.h>
#include<set>
#include<stddef.h>
#include<stdlib.h>
#include <unordered_set>
#include<unordered_map>
#include<map>
#include<string>
#include<ctype.h>
#include <queue>
// #pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;

#define f(abcd,n) for(int abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";

int exponentMod(int A, int B, int C)
{
    // Base cases
    if (A == 0)
        return 0;
    if (B == 0)
        return 1;
 
    // If B is even
    long y;
    if (B % 2 == 0) {
        y = exponentMod(A, B / 2, C);
        y = (y * y) % C;
    }
 
    // If B is odd
    else {
        y = A % C;
        y = (y * exponentMod(A, B - 1, C) % C) % C;
    }
 
    return (int)((y + C) % C);
}
int power(int x,  int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
ll bigMod(ll base, ll exp, ll m){

    if(exp == 0) return 1;

    if(!(exp & 1)){ //if exp is even
        ll temp= bigMod(base, exp/2, m)%m;
        return (temp*temp)%m;
    }

    else return ( (base%m)*(bigMod(base, exp-1, m))%m )%m;
}
bool isPrime(ll n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;
   
    // This is checked so that we can skip 
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;
   
    for (ll i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
   
    return true;
}
 
// Function to return the smallest
// prime number greater than N
ll nextPrime(ll N)
{
 
    // Base case
    if (N <= 1)
        return 2;
 
    ll prime = N;
    bool found = false;
 
    // Loop continuously until isPrime returns
    // true for a number greater than n
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}
 

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
    vector<vector<int> >v;
    for(int i=0;i<3;i++){
        int x,y;
        cin>>x>>y;
        vector<int>tp;
        tp.push_back(x);
        tp.push_back(y);
        v.push_back(tp);
    }
    vector<pair<int,int> >vp;
    for(int i=0;i<v.size();i++){
        vp.push_back(make_pair(v[i][1],v[i][0]));
    }
    
  sort(vp.begin(),vp.end());
for(int i=0;i<v.size();i++){
    v[i][0]=vp[i].second;
    v[i][1]=vp[i].first;
}
//   int ans=0;
//   int first=vp[0].first;
//   ll sum=0;
//   for(int i=0;i<v.size();i++){
//       if(sum+vp[i].second<=vp[i].first){
//           ans++;
//           sum+=vp[i].second;
//       }
//   }
//   out(ans);


    priority_queue<int>q;
    ll timeSum=0;
    int ans=0;
    for(int i=0;i<v.size();i++){
        
        if(timeSum+v[i][0]<=v[i][1]){
            q.push(v[i][0]);
            timeSum+=v[i][0];
            ans++;
            continue;

        }
        q.push(v[i][0]);
        int maxi=q.top();
        // if(timeSum-maxi+v[i][0]<=v[i][1]){
            q.pop();
            q.push(v[i][0]);
            // ans++;
            timeSum=timeSum-(maxi)+v[i][0];
        // }

        // if(q.size()==0) continue;
        // int maxi=q.top();
        
        
    }
    out(ans);
  
    
    return 0;
  

}