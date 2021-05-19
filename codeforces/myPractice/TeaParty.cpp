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


ll gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
   }

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
  int n,w;
  cin>>n>>w;
  int a[n];
  f(i,n) in(a[i]);
    ll sum=0;
  f(i,n){
      if(a[i]%2!=0){
          sum+=(a[i]/2)+1;
          continue;

      }
          sum+=(a[i]/2);

  }
  if(sum>w){
      out(-1);
      
  }
  else{
      vector<pair<int,int> >v;
      f(i,n){
          v.push_back(make_pair(a[i],i));
      }

      sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

      map<int,int> m;
      map<int,int> mapAns;
      for(int i=0;i<n;i++){
          m[v[i].second]=v[i].first;
      }

  ll initialSum=0;
    int ans[n];
    int k=0;
    ll previousSum=0;

for(int i=0;i<n;i++){
    ans[v[i].second]=v[i].first%2==0?(v[i].first/2):(v[i].first/2)+1;
    w-=ans[v[i].second];
    v[i].first-=ans[v[i].second];

}
if(w<0){
    out(-1);
    return 0;
}

for(int i=0;i<n;i++){
    if(w>=v[i].first){
        w-=v[i].first;
        ans[v[i].second]+=v[i].first;
    }
    else{
        v[i].first-=w;
        ans[v[i].second]+=w;
        break;
    }
}
    //   for(int i=0;i<n;i++){
    //     //   cout<<v[i].first<<" jawodf \n";
    //        if(initialSum>w){
    //           out(-1);
    //             return 0;
    //       }
    //     ll temp=initialSum;
    //     initialSum=v[i].first%2==0?(v[i].first/2):(v[i].first/2)+1;


        
    //       if(initialSum<temp){
    //           initialSum=temp;
    //       }
    //       ll temp2=initialSum;
    //         if(i==n-1){
    //             initialSum=w-previousSum;
    //         }
             
    //     //   out(a[itr.first]);
    //         if(initialSum<temp2){
    //              out(-1);
    //             return 0;
    //         }
    //      ans[v[i].second]=initialSum;
    //      previousSum+=initialSum;
    //     //  out(initialSum);
    //   }



  
      f(i,n){
          cout<<ans[i]<<" ";
      }
      out("\n");

  }
    
    return 0;
  

}