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
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

   int t;
   in(t);
   while(t--){
       int n,e,h,a,b,c;
       cin>>n>>e>>h>>a>>b>>c;
       ll sum=LONG_LONG_MAX;
       int zFlag=0;
       for(int i=0;i<=n;i++){
           for(int j=0;j<=n;j++){
               if(i+j>n) break;
               if(n-(i+j)<0)break;
               ll cost=0;
            //    out("hello1");
            //    cout<<"i,j,k "<<i<<" "<<j<<" "<<n-j<<"\n";
               int tempE=e,tempH=h;
               if(tempE/2>=i){
                   cost+=(a*i);
                   tempE-=(2*i);
               }
               else{
                   continue;
               }
            //    out("hello2");
               if(tempH/3>=j){
                   cost+=(b*j);
                   tempH-=(3*j);
               }
               else{
                   continue;
               }
            //    out("hello3");
               if(tempE>=n-j-i && tempH>=n-j-i){
                   cost+=(c*(n-j-i));

               }
               else {continue;}
               
            // out("hello4");
               sum=min(sum,cost);


            
           }
       }
       if(sum==LONG_LONG_MAX) sum=-1;
       out(sum);



    //    if(a==0||b==0||c==0)
        // ll ans1=solve(n,1,e-2,h,sum+a,a,b,c);
        // ll ans2=solve(n,1,e,h-3,sum+b,a,b,c);
        // ll ans3=solve(n,1,e-1,h-1,sum+c,a,b,c);

        // ll ans=min({ans1,ans2,ans3});
        // if(ans>=INT_MAX) ans=-1;

        // char mini,mini2,mini3;
        // if( a<=b && a<=c ){
        //     mini='a';
        // }
        // else if( b<=c && b<=a ){
        //     mini='b';
        // }
        // else{
        //     mini='c';
        // }

        // if(mini=='a'){
        //     if(b<c){
        //         mini2='b';
        //         mini3='c';
        //     }
        //     else{
        //         mini2='c';
        //         mini3='b';
        //     }
        // }
        // else if(mini=='b'){
        //     if(a<c){
        //         mini2='a';
        //         mini3='c';
        //     }
        //     else{
        //         mini2='c';
        //         mini3='a';
        //     }
        // }
        // else{
        //     if(a<c){
        //         mini2='a';
        //         mini3='c';
        //     }
        //     else{
        //         mini2='c';
        //         mini3='a';
        //     }
        // }
        

   }

    
    return 0;
  

}