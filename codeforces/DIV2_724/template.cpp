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
      vector<int>a;
      unordered_set<int>s;
      f(i,n){
          int tp;
          in(tp);
          a.push_back(tp);
          s.insert(tp);
      }
      
        queue<int>q;
      for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
              int tp=abs(a[i]-a[j]);
              if(!s.count(tp)){
                  s.insert(tp);
                  q.push(tp);
              }
              
              

          }
      }
    int f=0;
      while(q.size()){
          int tp1=q.front();
          q.pop();
          for(int i=0;i<a.size();i++){
              
              int tp=abs(a[i]-tp1);
              if(!s.count(tp)){
                  s.insert(tp);
                  q.push(tp);
              }
              

          }
            a.push_back(tp1);
            if(a.size()>300){
                f=1;
                break;
            }
            // out(tp1);
          }
          if(f==1){
              out("NO");
              continue;
          }
          
        if(a.size()<=300){
            out("YES");
            out(a.size());
            for(int i=0;i<a.size();i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            out("NO");
        }
      }
   
   
    
    return 0;
  

}