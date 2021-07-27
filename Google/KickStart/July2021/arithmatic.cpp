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

#define f(abcd,n) for(ll abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";


ll gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
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

ll solve(vector<vector<ll> >&a){
    //diag1
    ll c=0;
    ll tp=-51,d=1000;
    if(a[1][1]-a[0][0]==a[2][2]-a[1][1]) c++;
    
    //diag2
    if(a[1][1]-a[0][2]==a[2][0]-a[1][1]) c++;
    // r1
    if(a[0][1]-a[0][0]==a[0][2]-a[0][1]) c++;
    // r2
    if(a[1][1]-a[1][0]==a[1][2]-a[1][1]) c++;
    // r3
    if(a[2][1]-a[2][0]==a[2][2]-a[2][1]) c++;
    // c1
    if(a[1][0]-a[0][0]==a[2][0]-a[1][0]) c++;
    // c2
    if(a[1][1]-a[0][1]==a[2][1]-a[1][1]) c++;
    // c3
    if(a[1][2]-a[0][2]==a[2][2]-a[1][2]) c++;
    return c;
}

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // from collections import Counter
  

      ll t=1;
      in(t);
      for(ll abcd=0;abcd<t;abcd++){             
          ll ans=0;
        // vector<vector<ll> >a(3,vector<ll>(3));
        vector<int>a;
        for(ll i=0;i<3;i++){
            for(ll j=0;j<3;j++){
                if(i==1&&j==1) continue;
                ll tp=0;
                in(tp);
                a.push_back(tp);
            }
        }
        vector<int>b;
        
        if (abs(a[0]+a[7])%2==0)
            b.push_back((a[0]+a[7])/2);
    if (abs(a[2]+a[5])%2==0){
        b.push_back((a[2]+a[5])/2);
    }
    if (abs(a[1]+a[6])%2==0)
        b.push_back((a[1]+a[6])/2);
    if (abs(a[3]+a[4])%2==0)
        b.push_back((a[3]+a[4])/2);
    ans=0;


    if ((a[0]+a[2])%2==0&&(a[0]+a[2])/2==a[1])
        ans+=1;
    if ((a[0]+a[5])%2==0&&(a[0]+a[5])/2==a[3])
        ans+=1;
    if ((a[7]+a[2])%2==0&&(a[7]+a[2])/2==a[4])
        ans+=1;
    if ((a[5]+a[7])%2==0&&(a[5]+a[7])/2==a[6])
        ans+=1;

    unordered_map<int,int>m;
    int maxi=0;
    for(int i=0;i<b.size();i++){
        m[b[i]]++;
        maxi=max(maxi,m[b[i]]);

    }
    
        ans+=maxi;
        
        cout<<"Case #"<<abcd+1<<": "<<ans<<"\n";



   }

     
    
      
        
      

   

    
    return 0;
  

}