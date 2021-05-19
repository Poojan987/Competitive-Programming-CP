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
  
   int t;
   in(t);
   while(t--){
      int k;
      in(k);
      ll sum=0;
      ll a[2*k+2];
      for(int i=1;i<=(2*k+1);i++){
          a[i]=k+(i*i);
      }
      for(int i=1;i<=(2*k);i++){
          sum+=gcd(a[i],a[i+1]);
      }
      out(sum);
      
   }
  
    
    return 0;
  

}