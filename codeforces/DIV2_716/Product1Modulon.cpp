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


ll gcd(ll a, ll b) {
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



vector<int> adjacencyList[100000];
int visited[100000];

int dfs(int ind,int depth){
    int cnt=depth;
    if(visited[ind]!=1){
        visited[ind]=1;
        for(auto itr:adjacencyList[ind]){
            if(visited[itr]!=1){
                cnt=max(cnt,dfs(itr,depth+1));
                // out(depth);
            }
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


   
      ll n;
      in(n);
      unsigned long long int ans=1;
      vector<ll>v;
      if(n==2){
          out(1);
          out(1);
          return 0;
      }

      for(ll i=1;i<n;i++){
          if(gcd(i,n)==1){
              ans=(ans*(i))%n;
               if(i==n-1 && ans%n==n-1){
              break;
          }
          else{
          v.push_back(i);
          }
          }

         

      }
    //   if(v.size()==99990) v.size()=
      out(v.size());
      
      for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
      }
      out("\n");
      



   
   
   


    
    return 0;
  

}