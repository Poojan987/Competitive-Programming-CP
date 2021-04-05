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
void solve(int n){
    
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int mod=1000000007;

 int n,x;
 in(n);
 in(x);

 ll sum=0;
 int a[n];
 f(i,n) in(a[i]);

 int dp[n+1][x+1];
 
for(int i=1;i<n+1;i++){
    for(int sum=0;sum<=x;sum++){
        if(sum==0) dp[i][sum]=1;

        else{
            int op1=i==1?0:dp[i-1][sum];
            int op2=a[i-1]>sum?0: dp[i][sum-a[i-1]];

            dp[i][sum]=(op1+op2)%mod;
        }
    }
}

// for(int i=1;i<=n;i++){
//     for(int j=0;j<=x;j++){
//         cout<<dp[i][j]<<" ";
//     }
//     cout<<"\n";

// }
out(dp[n][x]);
    



    
    return 0;
  

}