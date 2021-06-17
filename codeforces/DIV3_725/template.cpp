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
int diff=max(i2,i1)-min(i2,i1);


      
      int near1,near2;
      int back1=0,front1=0,back2=0,front2=0;

        if(i1-0>n-1-i1){
            back1=1;
            near1=i1;
        }
        else{
            front1=1;
            near1=n-1-i1;
        }
        if(i2-0>n-1-i2){
            back2=1;
            near2=i2;
        }
        else{
            front2=1;
            near2=n-1-i2;
        }
int ans=0;
if(near1>near2){
    if(back2){
        ans+=back2+1;
        int tp=0;
        for(int i=near2+1;i<n;i++){
            tp++;
            if(v[i]==maxi){
                
                break;
            }
            
        }
        int tp2=0;
        for(int i=n-1;i>=0;i--){
            tp2++;
            if(v[i]==maxi){
                
                break;
            }
        }
        
    }
}
else{

}


//         if(near1<near2){
//             if(front1){
//                 ans+=front1+1;
//                 ans+=back1>
//             }
//             else{
//                 ans+=back1+;
//             }
//         }
//         else{

//         }
    //   near1=min(i1-0,n-1-i1);

    //   near2=min(i2-0,n-1-i2);
      
    

  }

    
    return 0;
  

}