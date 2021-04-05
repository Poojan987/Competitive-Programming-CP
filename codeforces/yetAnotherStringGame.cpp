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

  
bool isLucky(ll n,int d){
    while(n>1){
        int tp=n%10;
        if(tp==d){
            return true;
        }
        n=n/10;
    }
    return false;
}
  

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

   
    int t;
    in(t);
    while(t--){
       string s;
       in(s);

       for(int i=0;i<s.size();i++){
           if(i%2==0){
               if(s[i]=='a'){
                   s[i]='b';
               }
               else{
                   s[i]='a';
               }
           }
           else{
               if(s[i]=='z') s[i]='y';
               else s[i]='z';
           }
       }

       out(s);
       

    }

       
    

    
   
   
    
    return 0;
  

}