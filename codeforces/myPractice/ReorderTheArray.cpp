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


ll gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
   }

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
  int n;
  in(n);
    ll a[n];
    map<int,int>m;
    ll mini=LONG_MAX;
  f(i,n){
      in(a[i]);
      m[a[i]]++;
      mini=min(mini,a[i]);

  }
  sort(a,a+n);
  priority_queue<ll>pq;
  f(i,n) pq.push(a[i]);
  ll ans=0;
  for(int i=n-1;i>=0;i--){
      ll maxi=pq.top();
      if(a[i]!=maxi){
          pq.pop();
          ans++;
      }
  }
    // int remain=n-(m[mini]);
    // int ans=0;
    // for(auto &itr:m){
    //     int temp=remain;
    //     remain-=(2*itr.second);
    //     if(remain<0){
    //         ans+=temp;
    //         break;
    //     }
    //     ans+=(itr.second);
    // }
  out(ans);
    
    return 0;
  

}