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

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
      int t=1;
      in(t);
     
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        in(s);
        vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i]=='*')v.push_back(i);
    }

    int begin=v[0],end=v[v.size()-1];
    if(end==begin){
        out(1);
        continue;
    }

    int temp=begin;
    int temp2=begin;
    int count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]-temp<=k){
            temp2=v[i];
            if(i==v.size()-1) count++;
        }
        else{
            temp=temp2;
            count++;
            i--;
        }

    }
       out(count);
        // while(end-begin>k){
        //     // out("h1");
            
        //     if(i>=v.size()-1) break;
        //     int curr=v[i];
        //     int f=0;
        //     while(end-curr>k && curr-begin<=k){
        //         // out("h2");
                
        //         i++;
        //         if(i>=v.size()-1) break;
        //         curr=v[i];
        //         begin=v[i-1];
        //         count++;
        //         f=1;
        //      }
        //      if(f==0) break;
        // }
        // out(count);
        

        // int begin=0,end=n-1;

        // while(s[begin]!='*'){
        //     begin++;
            
        // }
        // while(s[end]!='*'){
        //     end--;
        // }
        // if(begin==end){
        //     out(1);
        //     continue;
        // }

        
        
        
    }


   

     
    
      
        
      

   

    
    return 0;
  

}