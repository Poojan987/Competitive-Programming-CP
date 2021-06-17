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
string toSt(ll num){
    string s;
    while(num>0){
        s+=(num%10)-'0';
        num/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
   ll t;
   in(t)
   while(t--){
      ll x;
      in(x)
     if(x>=2000) {
         out("YES");
         continue;
     }
    int f=0;
    int tp=x;

    while(x>0){
        if(!(x%11) || !(x%111)){
            f=1;
            break;


        }
        x-=11;
    }
    while(tp>0){
        if(!(tp%11) || !(tp%111)){
            f=1;
            break;


        }
        tp-=111;
    }
    if(f==1) out("YES")
    else out("NO")
     

   }
    
    return 0;
  

}