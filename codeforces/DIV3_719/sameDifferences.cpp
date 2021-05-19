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
   int a[n];
   vector<int>v;
   set<int >s;
   f(i,n) {
       in(a[i]);
       if(a[i]==i+1){
           v.push_back(a[i]);
           s.insert(a[i]);
       }
   }
   int ans=0;
   for(int i=0;i<v.size();i++){
       int tp=v[i]+1;
       int tn=1;
       ans+=v.size()-i-1;
       for(int j=i+1;j<v.size();j++){
           if(v[j]==tp){
               tp++;
               tn++;
               i=j+1;
           }
           else{
               i=j;
               break;
           }
       }
       ans-=(tn-1);
       
       ans+=tn>=1?((tn)*(tn-1))/2:0;
       cout<<"v[i] "<<v[i]<<" tn "<<tn<<"\n";
       out(ans);
       
   }

out(ans);
out("done");
  }

    
    return 0;
  

}