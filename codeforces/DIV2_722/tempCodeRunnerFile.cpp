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
      distBet=abs(distBet-lneg);
      int fFinal=0;
      for(int i=0;i<n;i++){
          if(a[i]<=distBet){
              fFinal=1;
              break;
          }
      }
      int maxi=0;
    //   c1
        ans=max(ans,z);
        ans=max(ans,(z+neg));
        ans=max(ans,pos>0&&z>0?2:0);
        ans=max(ans,(neg)+(pos>0&&z>0&&fFinal?2:z));
        ans=max(ans,neg+((pos>0&&fFinal)?1:0));
    // if(z==n){
    //     out(n);
    // }
    // else{
    //     ans=neg;
    //     ans+=pos>0&&z>0?1:z;
    //     ans+=pos>0?1:0;
    // }
    // cout<<"hey:"<<(ans)<<"\n";
    out(ans);

   }
    
    return 0;
  

}