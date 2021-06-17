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
      f(i,n){
          int tp;
          in(tp);
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
        int ans=0;
        if(i1<i2){
            int c1,c2,c3;
            c1=i1+1;
            c1+=i2-i1;

            c2=i1+1;
            c2+=n-i2;

            c3=n-i2;
            c3+=i2-i1;
            ans=min(c1,c2);
            ans=min(ans,c3);
        }
        else{
            int c1,c2,c3;
            c1=i2+1;
            c1+=i1-i2;

            c2=i2+1;
            c2+=n-i1;

            c3=n-i1;
            c3+=i1-i2;
            ans=min(c1,c2);
            ans=min(ans,c3);
        }
        // out("hello");
        out(ans);
        

  }

    
    return 0;
  

}