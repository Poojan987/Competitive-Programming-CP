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
void solve(int n){
    
}

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

 int t;
 in(t);
 while(t--){
    int n,q;
    cin>>n>>q;

    ll a[n];
    int bin[33];
f(i,33)bin[i]=0;
    f(i,n) {
        in(a[i]);
        ll temp=a[i];
        int p=0;
        while(temp>0){
            // bin[]++;
            p++;
            temp/=2;
        }
        temp=a[i];
        int j=0;
        while(temp>0){
            bin[j]+=temp%2;
            temp/=2;
            j++;
        }

    }
    ll current=0;
    int power=0;
    f(i,32){
        current+=pow(2,power)*(bin[i]>0?1:0);
        power++;
    }
out(current);

    while(q--){
        int x;
        ll v;
        cin>>x>>v;
        
        x--;
        ll temp =a[x];
        int j=0;
        while(temp>0){
            bin[j]-=(temp%2);
            temp/=2;
            j++;
        }
        a[x]=v;

        

        temp =v;
        j=0;
        while(temp>0){
            bin[j]+=(temp%2);
            temp/=2;
            j++;
        }
        int power=0;
        ll current=0;
            f(i,32){
                current+=pow(2,power)*(bin[i]>0?1:0);
                power++;
            }
        out(current);

    }

 }
    



    
    return 0;
  

}