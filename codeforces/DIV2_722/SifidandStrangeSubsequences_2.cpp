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
  
   ll t;
   in(t)
   while(t--){
      int n;
      in(n);
      ll a[n];

      f(i,n){
          in(a[i]);
      }
      sort(a,a+n);
      int ans=1,fNeg=0;
      int z=0,neg=0,pos=0;
      ll tp=a[0],distBet=a[0];
      ll fPos=0,lneg=0;
      f(i,n){
          if(a[i]<0) {
              neg++;
              lneg=a[i];
              
          }
          else{
            
            if(a[i]==0)
            {
                z++;
            }
            else{
                if(pos==0)
                fPos=a[i];
                pos++;
                // break;
            }

          }
      }
     ans=max(ans,z);
     ans=max(ans,(z+neg));
     ll mini=LONG_MAX;
     for(int i=1;i<n;i++){
         mini=min(mini,abs(a[i]-distBet));
         distBet=a[i];
         if(a[i]>0) break;
     }
     ans=max(ans,z+neg+(pos>0&&mini>=fPos));
    //  cout<<"hey:"<<(ans)<<"\n";
    out(ans);

   }
    
    return 0;
  

}