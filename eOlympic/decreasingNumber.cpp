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
int solve(int n,int c){
    if(n==1) return c;
    if(n==INT_MAX) return INT_MAX;
   return min({solve(n-1,c+1),solve(n%2==0?n/2:INT_MAX,c+1),solve(n%3==0?n/3:INT_MAX,c+1)}) ;
}

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

    
    int n;
    while(cin>>n){
    //     int dp[n+1];
    //     dp[1]=0;
    //     for(int i=2;i<n+1;i++){
    //         dp[i]=0;
    //         int op1=1+dp[i-1];
    //         int op2=INT_MAX,op3=INT_MAX;
    //         if(i%2==0){
    //             op2=1+dp[i/2];

    //         }
    //         if(i%3==0){
    //             op3=1+dp[i/3];
    //         }
    //         dp[i]+=min({op1,op2,op3});


    //     }
    // out(dp[n]);
    out(solve(n,0));
    }

    
    return 0;
  

}