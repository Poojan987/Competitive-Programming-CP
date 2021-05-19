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


int gcd(int a, int b) {
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
   int magic=k;
   int water=100-k;
   int gc=gcd(magic,100);
   int div=100;
    while(gc!=1&& gc==gcd(water,div)){
      magic=magic/gc;
      water=water/gc;
      div=div/gc;
      gc=gcd(magic,div);
    }
  out(div);
  }
   



    
    return 0;
  

}