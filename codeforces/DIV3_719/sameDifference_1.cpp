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
   ll a[n];
   vector<int>v;
   set<int >s;
   int c=0;
//    int ans=0;
   int f=0;
   unordered_map<ll,ll>m;
   f(i,n) {
       in(a[i]);
    //    if(a[i]-i>=0)
       m[a[i]-i]++;
   }
   ll ans=0;
   for(auto&itr:m){
       ans+=((itr.second)*(itr.second-1))/2;
   }


out(ans);

  }

    
    return 0;
  

}