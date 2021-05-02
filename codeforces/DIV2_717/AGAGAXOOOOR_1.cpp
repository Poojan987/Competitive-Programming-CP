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

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);



   int t;
   in(t);
   while (t--)
   {
      int n;
      in(n);
        ll a[n];
        set<ll> s;
        ll ans=0;
        f(i,n){
            in(a[i]);
            s.insert(a[i]);
            ans=ans^a[i];
        }
        // f()
        if(n==2){
            if(a[0]==a[1]){
                out("YES");
            }
            else{
                out("NO");
            }
            continue;

        }
        int f=0;

        for(auto &itr:s){
            cout<<itr<<" ";
            // ll itr=ans;
            int finalF=0;
            ll tp=0,c=0;
            int flag=0;
            // int tppp=0;
            for(int i=0;i<n;i++){
                if(tp==0 && a[i]==itr){
                    c++;
                    continue;
                }

              
                tp=tp^a[i];
                if(tp==itr){
                    c++;
                    tp=0;
                }
                else if(tp==0){
                    flag=1;
                }
            }
            // if(finalF==1){
            //     continue;
            // }
            if(tp==itr||(tp==0 && c>1)){
                if(flag==1 ){
                    if(c>1 ){
                        f=1;
                        break;
                    }
                    else{
                        // out("NO");
                        continue;
                    }
                }
                f=1;
                break;
            }
        }
        out("\n");
        if(f==1){
            out("YES");

        }
        else{
            out("NO");
        }


   }
   
   


    
    return 0;
  

}