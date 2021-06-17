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
       in(n)
       int a[(2*n)+2];
       for(int i=1;i<2*n+1;i++){
           in(a[i])

       }
       a[0]=0;
       a[2*n+1]=INT_MAX;
       sort(a,a+(2*n+2));
      
    int s=1,e=2*n;
    while(s<=e){
        cout<<a[s]<<" ";
        if(s!=e) cout<<a[e]<<" ";
        s++;e--;
    }
    //    for(int i=1;i<=2*n;i++){
    //        cout<<a[i]<<" ";
    //    }
       out("\n");
   }
    
    return 0;
  

}