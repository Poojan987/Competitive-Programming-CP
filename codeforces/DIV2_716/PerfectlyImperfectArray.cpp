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


//    int perfectSquare[(int)10e4];
   vector<ll>v;
   for(int i=1;i<=(int)10e3;i++){
       v.push_back(i*i);
    //    out(i*i);
   }
   int t;
   in(t);
   while (t--)
   {
       int n;
       in(n);
       int a[n];
        
       f(i,n){
           in(a[i]);
       }
       int ultraF=0;
       for(int i=0;i<n;i++){
           int f=0;
           for(int j=0;j<v.size();j++){
                // cout<<"a[i]:"<<a[i]<<" v[j]:"<<v[j]<<"\n";
               if(a[i]<v[j]) {
                   f=1;
                   break;

               }
               else if(a[i]==v[j]) {
                   f=2;
                   break;
               }
           }
           if(f==1){
               ultraF=1;
               break;
           }
       }

       if(ultraF==1){
           out("YES");
       }
       else{
           out("NO");
       }


   }
   
   


    
    return 0;
  

}