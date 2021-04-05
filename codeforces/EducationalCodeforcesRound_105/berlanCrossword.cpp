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



vector<int> adjacencyList[100000];
int visited[100000];

int dfs(int ind,int depth){
    int cnt=depth;
    if(visited[ind]!=1){
        visited[ind]=1;
        for(auto itr:adjacencyList[ind]){
            if(visited[itr]!=1){
                cnt=max(cnt,dfs(itr,depth+1));
                // out(depth);
            }
        }
    }
    return cnt;
}
string solve(int n,int u,int r, int d, int l){
if(u==n){
    u=0;
    l--;r--;
}
if(r==n){
    r=0;
    u--;d--;

}
if(d==n){
    d=0;
    l--;r--;

}
if(l==n){
    l=0;
    u--;d--;

}

if(l<0 || r<0 || u<0|| d<0){
return "NO";
}

if(u==n-1){

    u--;
    if(l==n-1){
        l--;
    }
    else if(r==n-1){
        r--;
    }
    else if(l>0){
        l--;

    }
    else if(r>0){
        r--;
    }
    else{
        return "NO";
    }
}

if(d==n-1){

    d--;
    if(l==n-1){
        l--;
    }
    else if(r==n-1){
        r--;
    }
    else if(l>0){
        l--;

    }
    else if(r>0){
        r--;
    }
    else{
        return "NO";
    }
}


if(r==n-1){

    r--;
    if(u==n-1){
        u--;
    }
    else if(d==n-1){
        d--;
    }
    else if(u>0){
        u--;

    }
    else if(d>0){
        d--;
    }
    else{
        return "NO";
    }
}

if(l==n-1){

    l--;
    if(u==n-1){
        u--;
    }
    else if(d==n-1){
        d--;
    }
    else if(u>0){
        u--;

    }
    else if(d>0){
        d--;
    }
    else{
        return "NO";
    }
}





if(l<0 || r<0 || u<0|| d<0){
return "NO";
}

return "YES";
}

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

    int t;
    in(t);
    while(t--){
        int n,u,r,d,l;
        cin>>n>>u>>r>>d>>l;

        string ans="NO";

        vector<char> HowManyN;
        int HowManyNMinus1=0;
        int un=0,rn=0,ln=0,dn=0;
        // if(u==n) {
        //     HowManyN.push_back('u');
        //     rn++;
        //     ln++;
        //     u=0;
           

        // }
        // if(r==n){
        //     HowManyN.push_back('r');
        //     un++;
        //     dn++;
        //     r=0;

        // }
        // if(d==n) {
        //     HowManyN.push_back('d');
        //     ln++;
        //     rn++;
        //     d=0;

        // }
        // if(l==n) {
            
        //     HowManyN.push_back('l');
        //     un++;
        //     dn++;
        //     l=0;

        // }

        // int f1=0,f2=0;
        // if(u-un>=0 && l-ln>=0 && r-rn>=0 && d-dn>=0){
        //     // ans="YES";
        //     f1=1;
        // }
        

        // un=0,rn=0,ln=0,dn=0;

        // int ut=u,rt=r,lt=l,dt=d;
        // if(ut==n-1) {
        //     HowManyNMinus1++;
        //     if(r>l){
        //         r--;
        //     }
        //     else{
        //         l--;
        //     }

        // }
        // if(rt==n-1) {
        //     HowManyNMinus1++;
        //      if(u>d){
        //         u--;
        //     }
        //     else{
        //         d--;
        //     }
        
        // }
        // if(dt==n-1) {
        //     HowManyNMinus1++;
        //      if(l>r){
        //         l--;
        //     }
        //     else{
        //         r--;
        //     }

        // }
        // if(lt==n-1) {
        //     HowManyNMinus1++;
        //      if(u>d){
        //         u--;
                
        //     }
        //     else{
        //         d--;
                
        //     }
        //     }

        //     if(u-un>=0 && l-ln>=0 && r-rn>=0 && d-dn>=0){
        //         f2=1;
        //     // ans="YES";
        // }
        // if(f1==1 && f2==1) ans="YES";


// out(ans);

out(solve(n,u,r,d,l))

        
    }
   


    
    return 0;
  

}