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
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
   ll t;
   in(t)
   while(t--){
       int n;
       in(n);
       int a[n];
       f(i,n) in(a[i]);
       sort(a,a+n);
       int ans=0;
       if(n==1)out(0)
       else{
           int avg=(a[0]+a[1])/2;
           f(i,n){
               if(a[i]>avg) ans++;
           }
           out(ans);
       }
   }
    
    return 0;
  

}