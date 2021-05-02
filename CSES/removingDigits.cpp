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
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
int mod=1000000007;

 int n,x;
 in(n);
 int dp[(int)10e6+2];
 dp[0]=0;

 for(int i=1;i<10;i++){
     dp[i]=1;
 }
for(int i=10;i<n+1;i++){
    set<int> dig;
    int temp=i;
    while(temp>0){
        dig.insert(temp%10);
        temp/=10;
    }
    int mini=INT_MAX;
        // set<int, greater<int> >::iterator itr;
    for(auto itr=dig.begin();itr!=dig.end();itr++){
        if(*itr==0) continue;
        // cout<<"itr: "<<*itr;
        mini=min(mini,1+dp[i-*itr]);
    }
    if(mini ==INT_MAX) mini=0;
    dp[i]=mini;
    
}

out('\n');
out(dp[n]);

    
    return 0;
  

}