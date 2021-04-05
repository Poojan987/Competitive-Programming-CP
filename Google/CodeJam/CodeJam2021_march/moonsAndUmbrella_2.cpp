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
      for(int abcd=0;abcd<t;abcd++){
        int x,y;
        string s;
        cin>>x>>y>>s;
        string real="";
        f(i,s.size()){
            if(s[i]=='?') continue;
            real+=s[i];
        }

        ll ans=0;
        int n=real.size();
        
        int tp1=real.find("CJ");
        // out(real);
        // out(tp1);
        // out("\n");
        while(tp1!=-1){
            // out("hello1");
            ans+=x;
            tp1=real.find("CJ",tp1+1);
        }
        int tp2=real.find("JC");
        while(tp2!=-1){
            // out("hello2");
            ans+=y;
            tp2=real.find("JC",tp2+1);
        }
        
        //  for(int i=0;i<real.size();i++){
        //     if(i==0){
        //         if(real[i]=='c' && real[i+1]=='j'){
        //             ans+=x;
        //         }
        //         else if(real[i]=='j' && real[i+1]=='c'){
        //             ans+=y;
        //         }
        //     }
        //     else if(i==n-1){
        //         if(real[i]=='c' && real[i-1]=='j'){
        //             ans+=y;
        //         }
        //         else if(real[i]=='j' && real[i-1]=='c'){
        //             ans+=x;
        //         }
        //     }
        //     else{
        //         if(real[i]=='c' && real[i+1]=='j'){
        //             ans+=x;
        //         }
        //         else if(real[i]=='j' && real[i+1]=='c'){
        //             ans+=y;
        //         }
        //         if(real[i]=='c' && real[i-1]=='j'){
        //             ans+=y;
        //         }
        //         else if(real[i]=='j' && real[i-1]=='c'){
        //             ans+=x;
        //         }

        //     }
        // }
      


 cout<<"Case #"<<abcd+1<<": "<<abs(ans)<<"\n";



   }

     
    
      
        
      

   

    
    return 0;
  

}