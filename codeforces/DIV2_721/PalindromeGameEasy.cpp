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
       ll n;
       in(n);
       string s;
       in(s);
        int oneC=0;
       for(int i=0;i<n;i++){
           if(s[i]=='1') oneC++;

       }
       
       int zeroC=n-oneC;
       if(oneC==n){
           out("DRAW");
           continue;
       }
       if(zeroC%2==0){
           out("BOB");
       }
       else if(zeroC%2!=0 && zeroC>1){
           out("ALICE");
       }
       else{
           out("BOB");
       }
   }
    
    return 0;
  

}