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
   
   int a[9];
   f(i,9) a[i]=0;
    int power=0;
    ll ans=0;

   while(true){
       int f=0;
       f(i,9){
           int tp=pow(10,power);
           a[i]+=(tp*(i+1));
        //    cout<<a[i]<<" ";

           if(a[i]>n){
               f=1;
               break;
           }
           ans++;
       }

       power++;
       if(f==1) break;
   }
out(ans);
  }

    
    return 0;
  

}