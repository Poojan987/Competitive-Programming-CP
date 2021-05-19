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

// cout<<(((double)sqrt(9)))<<" ";
// cout<<(((double)sqrt(9)));
// out("\n");

  int t;
  in(t);
  while(t--){
  
    int n;
    in(n);
   

       int a[n+1][n+1];
       if(n==1){
           out(1);
           continue;
       }
       else if(n==2){
           out(-1);
           continue;
       }
       else{
           int x=1,z=2;
           
               for(int i=1;i<=n*n;i+=2){
                   out(i);
               }
               for(int i=2;i<=n*n;i+=2){
                   out(i);
               }
           
          

       }

  }

    
    return 0;
  

}