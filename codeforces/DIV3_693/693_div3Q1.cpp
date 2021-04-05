

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
       string str,ans="NO";
       in(str);

        
      if(str.substr(0,1)=="2"&& str.substr(n-3,3)=="020")
        ans="YES";
      else if(str.substr(0,2)=="20"&& str.substr(n-2,2)=="20")  
      ans="YES";
      else if(str.substr(0,3)=="202"&& str.substr(n-1,1)=="0")  
      ans="YES";
      else if(str.substr(0,4)=="2020" || str.substr(n-4,4)=="2020")  
      ans="YES";
      


            out(ans);

            
               
           
       
   }

 return 0;
  

}
