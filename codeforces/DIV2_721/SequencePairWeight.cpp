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
       ll a[n];
       vector<ll> dp(n,0);
       map<ll,ll >v;
       ll sum=0;

       f(i,n){  
           ll tp;
           in(tp);
           if(i>0) dp[i]=dp[i-1];
           
           dp[i]+=v[tp];
           sum+=dp[i];
           v[tp]+=i+1;
           
       }
       out(sum);
   }
    
    return 0;
  

}