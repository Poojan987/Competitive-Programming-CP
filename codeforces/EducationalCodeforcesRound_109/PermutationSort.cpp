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
    
   int n;
   in(n);
   int a[n];
   vector<int> v;
   f(i,n){
       in(a[i]);
   }
   int c1=0,f1=0,c2=0;
   for(int i=0;i<n;i++){
       if(a[i]==i+1){
           c1++;
       }
       else{
           v.push_back(i);
       }
   }
   if(c1==n){
       out(0);
       continue;
   }
   int ind=0;
   if(a[0]==1|| a[n-1]==n){
       out(1);
   }
   else if(a[0]==n && a[n-1]==1) {
       out(3);
   }
   else{
       out(2);
   }
//     f1=0;
//     if(v.size()==n){
//         out(2);
//         continue;
//     }
//    for(int i=0;i<v.size()-1;i++){
//        if(v[i]+1!=v[i+1]){
//            f1=1;
//            break;
//        }
//    }
//    if(f1==1) {
//        out(2);

//    }
//    else{

//     out(1);
//    }
   


  }
   



    
    return 0;
  

}