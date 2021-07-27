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

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

  int t;
  in(t);
  while(t--){
      int n;
      in(n)
      int tp=1;
      int z=n;
      int c=0,sum=0;
      while(n>0){
          if(tp>n){
              n=0;
          }
          
        //   cout<<sum<<" "<<tp<<" "<<n<<"\n";
          n-=tp;
          tp+=2;
          
          c++;
          
      }
      out(c);

} 

    
    return 0;
  

}