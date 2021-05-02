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
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);


   
   int t;
   in(t);
   while (t--)
   {
       string x,y;
       cin>>x>>y;
       int c=0;
       int ind1=0,ind2=0;
       while(x.size()!=y.size()){
           y='0'+y;
       }
         for(int i=y.size()-1;i>=0;i--){
           if(y[i]=='1') {
               ind2=i;
               break;
           }
       }
       for(int i=ind2;i>=0;i--){
           if(x[i]=='1') {
               ind1=i;
               break;
           }
       }
      
int index=ind1;
    // while(ind1!=ind2){
    //     y+='0';
    //     c++;
    // }
    c+=(ind2-ind1);


out(c);
   }
   
   


    
    return 0;
  

}