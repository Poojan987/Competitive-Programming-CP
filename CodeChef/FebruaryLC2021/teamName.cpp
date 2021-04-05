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
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

   
    int t;
    in(t);
    while(t--){
       int n;
       in(n);

       string a[n];
       unordered_map<string,int>m;
       unordered_map<char,unordered_set<string>> newM;
       f(i,n) {
           in(a[i]);
           m[a[i]]=1;
           newM[a[i][0]].insert(a[i].substr(1));


           }
           ll sum=0;
        //    for(auto itr1=newM.begin();itr1!=newM.end();itr1++){
               
        //        for(auto &itr2:itr1->second ){
        //            cout<<itr2<<" ";
        //        }

        //        cout<<"\n";
        //    }

           for(auto itr1=newM.begin();itr1!=newM.end();itr1++){
               for(auto itr2=next(itr1);itr2!=newM.end();itr2++){
                   int s1=itr1->second.size(),s2=itr2->second.size();
                   int f=0;
                   if(s1>s2){
                       f=1;
                   }
                
                // for(auto&itrtp1:itr1->second){
                //         cout<<itrtp1<<" ";
                //     }
                //     cout<<"\n";
                //     for(auto&itrtp1:itr2->second){
                //         cout<<itrtp1<<" ";
                //     }
                //     cout<<"\n";
                // if(f==0){
                   for(auto&itr3:itr1->second){
                       if(itr2->second.count(itr3)){
                           s1--;
                           s2--;
                           
                       }
                       if(s1<=0 || s2<=0) continue;

                   }
                // }
                // else{
                //     for(auto&itr3:itr2->second){
                //        if(itr1->second.count(itr3)){
                //            s2--;
                           
                //        }
                //        if(s2<0) s2=0;

                //    }
                    
                // }

                   sum+=(2*(s1*s2));
                //    out(s1*s2);

               }
           }

           

        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         // string t1=a[j][0]+a[i].substr(1),t2=a[i][0]+a[j].substr(1);
        //         if(m[a[j][0]+a[i].substr(1)]==0 && m[a[i][0]+a[j].substr(1)]==0){
        //             sum+=2;
        //         }

        //     }
        // }

        out(sum);
       

    }

       
    

    
   
   
    
    return 0;
  

}