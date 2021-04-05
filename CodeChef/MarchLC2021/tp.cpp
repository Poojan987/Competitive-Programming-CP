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
ll a,b,c;


ll find(ll n, ll e, ll h){
    ll temp;
    if(n<=0){
        // cout << "0\n";
        return 0;
    }
    ll ans = 1e14;
    // Single Item
    if(n<=e && n<=h){
        ans = min(ans, n*c);
    }
    if(3*n <= h){
        ans = min(ans, n*b);
    }
    if(2*n <= e){
        ans = min(ans, n*a);
    }
    // Two
    if(((h-n)/2 >= 1) && ((h-n)/2 >= (n-e))){
        if((b-c)>=0){
            temp = max(1LL, n-e);
        }
        else{
            temp = min(n-1, (h-n)/2);
        }
        ans = min(ans, (b-c)*temp + n*c);
    }
    if(((e-n) >= 1) && ((e-n) >= (n-h))){
        if((a-c)>=0){
            temp = max(1LL, n-h);
        }
        else{
            temp = min(n-1, e-n);
        }
        ans = min(ans, (a-c)*temp + n*c);
    }
    if((e/2 >= 1) && (e/2 >= (3*n - h + 2)/3)){
        if((a-b)>=0){
            temp = max(1LL, (3*n - h + 2)/3);
        }
        else{
            temp = min(n-1, e/2);
        }
        ans = min(ans, (a-b)*temp + n*b);
    }
    // Three
    if((h>=4) && (e>=3) && (n>=3)){
        ans = min(ans, a + b + c + find(n-3, e-3, h-4));
    }
    // cout << "n: " << n << "     e: "<< e << "   h: " << h << "  ans: " << ans << endl; 
    return ans;

}

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

   int t;
   in(t);
   while(t--){


       int n,e,h,a,b,c;
       cin>>n>>e>>h>>a>>b>>c;
       


      ll ans{0};
    ans = find(n, e, h);
    if(ans == 1e14){
        cout << "-1\n";
    }
    else{
        cout << ans << endl;
    }



       

   }

    
    return 0;
  

}