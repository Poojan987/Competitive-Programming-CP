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
  
   int q;
   in(q);
   while(q--){
       int n;
       in(n);
       int a[n];
       int sum=0;
       f(i,n) {
        in(a[i]);
        sum+=a[i];

       } 
       if(sum%n==0){
           out(sum/n);
       }
       else{
           int tp=sum/n;
           out(tp+1);
       }
    //    out((sum+(n-(sum%n)))/n);
   }

return 0;
}