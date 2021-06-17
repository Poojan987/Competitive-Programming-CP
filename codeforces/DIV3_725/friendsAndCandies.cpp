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

  int t;
  in(t);
  while(t--){
  
      int n;
      in(n);
      vector<int>v;
      int mini=INT_MAX,maxi=INT_MIN;
      int i1,i2;
      ll sum=0;
      f(i,n){
          int tp;
          in(tp);
          sum+=tp;
          v.push_back(tp);
          if(tp>maxi){
              i2=i;
              maxi=tp;
          }
          if(tp<mini){
              i1=i;
              mini=tp;
          }
      }
      if(sum%n!=0) out(-1)
      else{
          int tp=sum/n;
            int c=0;
          for(int i=0;i<n;i++){
              if(v[i]==tp) continue;
              if(v[i]>tp) c++;
          }
          out(c);
      }

  }

    
    return 0;
  

}