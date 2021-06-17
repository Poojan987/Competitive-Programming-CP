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
// unordered_map<int,int>m;
ll solve(vector<int> &v,ll sum,int c,int ind,vector<vector<int> >&dp){
    
    int n=v.size();
    if(ind==n){
        return c;
    }
    if(dp[ind][c]!=-1) return dp[ind][c];
    // if(v[ind]+sum<0) return c;

    
    return dp[ind][c]=max((v[ind]+sum>=0 ?(solve(v,sum+v[ind],c+1,ind+1,dp)):c),solve(v,sum,c,ind+1,dp));
    // out(tp);
    // return tp;
}
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
   ll t=1;
//    in(t)
   while(t--){
     int n;
     in(n)
    //  int a[n];
     vector<int> v(n);
     vector<vector<int> >dp(n);

     f(i,n) {
         in(v[i])
        //  m[i]=-1;
         f(j,n){
             dp[i].push_back(-1);
         }
     }
    
    int z=solve(v,0,0,0,dp);
    int ans=-1;
    ll tp=-1;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(dp[i][j]>=0){
               ans=max(ans,j);
               
           }
           cout<<dp[i][j]<<"  ";
       }
       cout<<"\n";
        // tp=max(tp,dp[n-1][i]);

    }
    out(((ans>=0)?ans+1:0));
    


   }
    
    return 0;
  

}