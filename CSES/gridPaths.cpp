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


int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
   }

int * SieveOfEratosthenes(int n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        
        if (prime[p] == true) 
        { 
            
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    
    int* ALLPRIMES=new int[n],count=0;
    for (int p=2; p<=n; p++) {
       if (prime[p]) {
          ALLPRIMES[count]=p;
        count++;
       }
    }
       return ALLPRIMES;
    
} 
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
} 
bool sortByVal(const pair<int, double> &a, 
               const pair<int, double> &b) 
{ 
    return (a.second < b.second); 
} 


vector<int> adjacencyList[500000];
int visited[500000];

void dfs(int index){
    if(visited[index]==0){
        visited[index]=1;
        for(int i=0;i<adjacencyList[index].size();i++){
            if(visited[adjacencyList[index][i]]==0){
                dfs(adjacencyList[index][i]);
            }
        }
    }
}
// int solve(int n,int currN,int e,int h,ll cost,int a,int b,int c){
    
//     if(cost>=INT_MAX || (e<0 || h<0)) return INT_MAX;
//     if(currN==n) return cost;
//     return min({solve(n,currN+1,e-2,h,cost+a,a,b,c),solve(n,currN+1,e,h-3,cost+b,a,b,c),solve(n,currN+1,e-1,h-1,cost+c,a,b,c)}) ;
// }
int binarySearch(vector<ll>&prefixSum,vector<ll>&suffixSum,int l,int r,ll backElement,ll FrontElementSufix){

    if(l>r) return -1;
    int mid=(l+r)/2;
    // out(mid);
    // cout<<"backElement: "<<backElement<<"\n";
    // cout<<"prefixSum[mid]-back "<<prefixSum[mid]-backElement<<"\n";
    // cout<<"FrontElement: "<<FrontElementSufix<<"\n";
    // cout<<"sufixSum[mid]-front"<<suffixSum[mid]-FrontElementSufix<<"\n";
    if(prefixSum[mid]-backElement==suffixSum[mid]-FrontElementSufix){
        return mid;
    }
    else if(prefixSum[mid]-backElement>suffixSum[mid]-FrontElementSufix){
        return binarySearch(prefixSum,suffixSum,l,mid-1,backElement,FrontElementSufix);
    }
    else{
        return binarySearch(prefixSum,suffixSum,mid+1,r,backElement,FrontElementSufix);
    }
    return 1;
}

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
        const unsigned int mod = 1000000007;
//    int mod=10e9+7;
//    out(mod);
     int n;
     in(n);

    //  string a[n];
     string *a = new string[n];
     int dp[n][n];
     dp[n-1][n-1]=1;
     f(i,n)in(a[i]);

     for(int i=n-1;i>=0;i--){
         for(int j=n-1;j>=0;j--){
             if(j==n-1&&i==n-1) continue;
            
             if(a[i][j]=='*') {
                 dp[i][j]=0;
                 continue;
             }
             dp[i][j]=((j+1<=n-1?dp[i][j+1]:0)%(mod)+(i+1<=n-1?dp[i+1][j]:0)%(mod))%(mod);
         }
     }
    //  for(int i=1;i<)
    if(a[n-1][n-1]=='*') dp[0][0]=0;
     out(dp[0][0]%(mod));
    //  for(int i=0;i<n;i++){
    //      for(int j=0;j<n;j++){
    //          cout<<dp[i][j]<<" ";
    //      }
    //      out("\n");
    //  }
    delete [] a;

     
    
      
        
      

   

    
    return 0;
  

}