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
      ll *arr= SieveOfEratosthenes((ll)sqrt(10e5));
      vector<ll>v(sqrt(10e3+1));
      for(int i=0;i<(ll)sqrt(10e3);i++){
          v.push_back(arr[i]);
          out(v[i]);

      }
      
      for(int abcd=0;abcd<t;abcd++){
    ll z;
    in(z);
        //   ll small=arr[0]*arr[1];
        //   int i=1,j=2;
        //   int temp=small;
        //     while(small<=z){
        //         temp=small;
        //         small=arr[i]*arr[j];
        //         i++;
        //         j++;
        //     }

    auto low1=lower_bound(v.begin(),v.end(),z);
    ll ans=v[low1-v.begin()]*v[(low1)-v.begin()-1];




          


cout<<"Case #"<<abcd+1<<": "<<ans<<"\n";

   }

     
    
      
        
      

   

    
    return 0;
  

}