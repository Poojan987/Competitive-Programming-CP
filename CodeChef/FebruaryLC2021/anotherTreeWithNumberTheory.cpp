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
// #include <boost/algorithm/string.hpp>
#pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;


///HELLO WORLD;
//set<int>s={1,2,3,4};
// map<int,vector<int>>m;
//size_t found;
//found = ans.find_last_of(s2[0]); 

#define f(abcd,n) for(int abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
   
}
// #define MAXN   100001 
#define MAXN   1 
  
// stores smallest prime factor for every number 
int spf[MAXN]; 

unordered_map<int,set<int>>s;

void sieve() 
{ 
    spf[1] = 1; 
    for (int i=2; i<MAXN; i++) 
  
        // marking smallest prime factor for every 
        // number to be itself. 
        spf[i] = i; 
  
    // separately marking spf for every even 
    // number as 2 
    for (int i=4; i<MAXN; i+=2) 
        spf[i] = 2; 
  
    for (int i=3; i*i<MAXN; i++) 
    { 
        // checking if i is prime 
        if (spf[i] == i) 
        { 
            // marking SPF for all numbers divisible by i 
            for (int j=i*i; j<MAXN; j+=i) 
  
                // marking spf[j] if it is not  
                // previously marked 
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
} 
  
vector<int> getFactorization(int x,int i) 
{ 
    vector<int> ret; 
    while (x != 1) 
    { 
        s[spf[x]].insert(i);
        ret.push_back(spf[x]); 
        x = x / spf[x]; 
    } 
    return ret; 
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
// .\a.exe CTRL+SHIFT+B -> Then make new terminal and the write a.exe Plus Tab

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

  

  int treeAns(unordered_map<int,vector<int>>&tree,int v,int w){
      ll ans=0;
    //   cout<<"hello "<<v<<" "<<w<<"\n";
      if(tree[v].size()==0){
          return 0;
      }
      else if(w%tree[v].size()!=0){
          return w;
      }
      else{
          for(auto&itr:tree[v]){
              ans+=treeAns(tree,itr,w/tree[v].size());
            //   out(ans);
          }
          return ans;

      }

  }

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

   
    
      int n,query;
      in(n);

    unordered_map<int,vector<int>>tree;
      int p[n];
      f(i,n-1){
          in(p[i]);
          tree[p[i]].push_back(i+2);

      }

      in(query);
      while(query--){
          int v,w;
          cin>>v>>w;
            ll ans=w;
          
          ans=treeAns(tree,v,w);
          out(ans);


      }
      
       

    

       
    

    
   
   
    
    return 0;
  

}