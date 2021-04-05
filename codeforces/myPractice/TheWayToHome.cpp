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




// void bfs(int ind){
//     if(visited[ind]!=1){
//         visited[ind]=1;
//         for(auto itr:adjacencyList[ind]){
//             if(visited[itr]!=1){
//                 dfs(itr);
//             }
//         }
//     }
// }

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

int n,d;
cin>>n>>d;
string s;
in(s);

int count=0,temp=0,ans=0;
while(count!=n-1){
// out(count);

    ans++;
    temp=count;
    count=count+d;
    if(count>=n-1){
        break;
    }
   
    if(s[count]!='1'){
        while(count!=temp && s[count]!='1'){
            count--;

        }
    }
    if(count==temp ){
        ans=-1;
        break;
    }
    if(count>=n-1){
        break;
    }

    // out(count);

}

out(ans);


    
    return 0;
  

}