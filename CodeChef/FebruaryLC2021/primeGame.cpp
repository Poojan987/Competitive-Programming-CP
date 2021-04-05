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

  

  
  set<int> primeFactors(int n,int y){
      set<int> f;
    //   if(n==1)  f.push_back(0);

        f.insert(1);
        if(n%2==0){
            
            f.insert(2);
        while (n%2==0)
        {
            n=n/2;
            
        }
        }

        for(int i=3;i<=sqrt(n);i++){
            if(n%i==0){
                f.insert(i);
                while(n%i==0){
                    n=n/i;
                }
            }
        }

        if(n>2){
            f.insert(n);
        }
        if(f.size()>y) f.clear();

        return f;
        
  }

  string solve(int num,set<int>&primefact,unordered_map<int,int>&dp,string winner){
        vector<int>arr;
        if(dp[num]==-1) {
            if(winner=="Chef") return "Divyam";

          return "Chef";
        }

        // set<int>primefact=primeFactors(num);
        
      for(auto &itr1:primefact){
          if(itr1>num) break;
          
          int diff=num-itr1;
          if(primefact.count(diff)!=1){
              arr.push_back(diff);

          }

      }
      if(arr.size()==0){
          dp[num]=-1;
        //   return winner;
          if(winner=="Chef") return "Divyam";

          return "Chef";

      }
      else{
          set<string>s;
          string hey="";
          string pass="Chef";
          if(winner=="Chef"){
              pass="Divyam";
              }
          for(auto &itr2:arr){
              string tp=solve(itr2,primefact,dp,pass);
              s.insert(tp);
              hey=tp;
          }
          if(s.size()==2){
              return winner;
          }
          else{
              return hey;
          }


      }

      return winner;

  }
  
void calcPrimes(int n,vector <int> &arr){

    for (int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            arr.push_back(i);
            
            

        }
    }
    

}

void SieveFillingVector(int n,vector <int>&primes)
{
   
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true) 
        {
           
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    
    for (int p = 2; p <= n; p++)
        if (prime[p])
            primes.push_back(p);
}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

    vector<int> primes;
    SieveFillingVector(int(1e6),primes);

    // for(int i=0;i<10;i++) out(primes[i]);
   
    int t;
    in(t);
    while(t--){
      int xo,y;
      cin>>xo>>y;
        auto ind=upper_bound(primes.begin(),primes.end(),xo);
        
        
        
        if(y>=distance(primes.begin(),ind)){
            out("Chef");
        }
        else{
            out("Divyam");
        }

        





      
     




       

    }

       
    

    
   
   
    
    return 0;
  

}