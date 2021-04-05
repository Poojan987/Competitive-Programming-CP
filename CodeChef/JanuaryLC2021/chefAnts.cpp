

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
//#pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;
#define f(abcd,n) for(int abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";
int gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
   
}


int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
   
      

   int t;
   in(t);
   while(t--){
       int n;
       in(n);
       int store=0;
       vector<ll>v;
       for(int i=0;i<n;i++){
           ll m;
           in(m);
           int a[m];
           for(int j=0;j<m;j++){
               ll xij;
               in(xij);
               if(i==0){
                   store=m;
                //    a[j]=xij;
                   v.push_back(xij);
               }
           }
           
       }
int neg=0,p=0;
       for(int i=0;i<v.size();i++){
           if(v[i]<0) neg++;
           else if(v[i]>0) p++;
       }

            
    out(neg*p);
           
       
   }

 return 0;
  

}
