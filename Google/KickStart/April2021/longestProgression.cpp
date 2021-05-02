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


ll * SieveOfEratosthenes(ll n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (ll p=2; p*p<=n; p++) 
    { 
        
        if (prime[p] == true) 
        { 
            
            for (ll i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    
    ll* ALLPRIMES=new ll[n],count=0;
    for (ll p=2; p<=n; p++) {
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

int binarySearch(vector<ll>&prefixSum,vector<ll>&suffixSum,int l,int r,ll backElement,ll FrontElementSufix){

    if(l>r) return -1;
    int mid=(l+r)/2;
    
    if(prefixSum[mid]-backElement==suffixSum[mid]-FrontElementSufix){
        return mid;
    }
    else if(prefixSum[mid]-backElement>suffixSum[mid]-FrontElementSufix){
        return binarySearch(prefixSum,suffixSum,l,mid-1,backElement,FrontElementSufix);
    }
    else{
        return binarySearch(prefixSum,suffixSum,mid+1,r,backElement,FrontElementSufix);
    }
    return 1;
}
// int solve(vector<int>&v,)
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
      int t=1;
      in(t);
      
      
      for(int abcd=0;abcd<t;abcd++){
    


        int n;
        in(n);
        ll a[n];
        f(i,n)in(a[i]);
        int maxi=1;
if(n==2) {
    cout<<"Case #"<<abcd+1<<": "<<2<<"\n";
    continue;
}
ll temp=a[0]-a[1];
int z=0;
        for(int j=0;j<n;j++){
                // hey+=a[j];
                // cout<<a[j]<<" ";
                if(a[j]-a[j+1]==temp){
                    z++;
                }
                else{
                    temp=a[j]-a[j+1];
                    z=2;
                }
                maxi=max(maxi,z);
            }

        
        for(int i=0;i<n;i++){
            ll tp[n];
            f(j,n)tp[j]=a[j];
            if(i>0 && i<n-1)
                tp[i]=(a[i-1]+a[i+1])%2==0?((a[i-1]+a[i+1])/2):tp[i];
            else {
                if(i==0) {
                    tp[i]=tp[1]+(tp[1]-tp[2]);
                    
                    }
                else{
                    tp[i]=tp[n-2]-(tp[n-3]-tp[n-2]);
                }
            }
            int z=1;
            ll temp=tp[0]-tp[1];
            string hey="";
            for(int j=0;j<n-1;j++){
                
                // cout<<tp[j]<<" ";
                // if(j==n-2) cout<<tp[j+1]<<" ";
                if(tp[j]-tp[j+1]==temp){
                    z++;
                }
                else{
                    temp=tp[j]-tp[j+1];
                    z=2;
                }
                maxi=max(maxi,z);
            }
            // out("\n");



        }



          


cout<<"Case #"<<abcd+1<<": "<<maxi<<"\n";

   }

     
    
      
        
      

   

    
    return 0;
  

}