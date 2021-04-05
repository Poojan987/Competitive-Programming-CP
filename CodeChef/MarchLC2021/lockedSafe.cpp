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

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

   int t;
   in(t);
   while(t--){
       ll n;
       in(n);
    //    ll a[n];
       vector<ll>a;
       
       f(i,n) {
        //    in(a[i]);
        ll input;
        in(input);
        a.push_back(input);
       
           
       }
       ll tp=a[0];
       ll c=0;
       ll sum=0;
       for(int i=1;i<n;i++){
           if(a[i]==tp){
               c++;
           }else{
               sum-=(c*(c+1))/2;
               tp=a[i];
               c=0;
           }
       }
       sum-=(c*(c+1))/2;

       sum+=(n*(n-1)/2);
       if(sum<0) sum=0;
    //    unordered_map<int,int>freqF;
    
       
    //     int tempN=n;
       
       
    //    ll tp=(n*(n-1))/2;
    //    while(tp>0){
    //        sum+=tp;
    //        n--;
    //     //    out(tp);
    //        tp=(n*(n-1))/2;
    //    }
       out(sum);



       

   }

    
    return 0;
  

}