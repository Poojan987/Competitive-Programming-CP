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
int solve(int n,int currN,int e,int h,ll cost,int a,int b,int c){
    
    if(cost>=INT_MAX || (e<0 || h<0)) return INT_MAX;
    if(currN==n) return cost;
    return min({solve(n,currN+1,e-2,h,cost+a,a,b,c),solve(n,currN+1,e,h-3,cost+b,a,b,c),solve(n,currN+1,e-1,h-1,cost+c,a,b,c)}) ;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

   int t;
   in(t);
   while(t--){
       int n;
       in(n);
       ll a[n];
       f(i,n)in(a[i]);

        int ans=1;
       for(int i=0;i<n;i++){
           double num1=1.0*a[i];
           for(int j=i+1;j<n;j++){
               double num2=1.0*a[j];
               double m=((1.0)*(num2-num1))/((1.0)*(j-i));

               double c=(1.0)*a[j]-(m*(j+1));
            //    if(t==2)
            //        out(c);
            //        if(t==2)
            //    out(m);
               int ansTemp=1;

               for(int k=i+1;k<j;k++){
                    double y= m*(k+1)+c;
                    // out("jiasodf");
                    
                    // out(y);
                    if(a[k]<=y){
                        ansTemp++;
                    }
                    else{
                        break;
                    }
                    ans=max(ans,ansTemp);
               }
               
           }
       }
       out(ans);

   }

    
    return 0;
  

}