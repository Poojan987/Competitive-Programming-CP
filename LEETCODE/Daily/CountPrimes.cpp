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


ll gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
   }
 int countPrimes(int n) {
        //it's our sieve bhai
    if(n==0||n==2||n==1){
            return 0;
        }
        bool primes[n];
        for(int i=1;i<n;i++) primes[i]=true;

        
       
        for(long long int j=2*2;j<n;j+=2){
                primes[j]=false;
            }
        for(long long int i=3;i*i<n;i+=2){
          if(!primes[i]) continue;
            for(long long int j=i*i;j<n;j+=i){
                primes[j]=false;
            }
        }
        int c=0;
        for(int i=2;i<n;i++){
          if(primes[i]==true) {
            c++;
            // out(i);
          }
        }
        return c;
    }

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
    int n;
    in(n) ;
    out(countPrimes(n));
  
    
    return 0;
  

}