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


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

  ll n,m,xc,yc;
  cin>>n>>m>>xc>>yc;

  int k;
  in(k);
  pair<ll,ll> a[k];
  for(int i=0;i<k;i++){
      ll l,r;
      cin>>l>>r;
      a[i]=make_pair(l,r);
      

  }
ll ans=0;
  for(int i=0;i<k;i++){
      
      ll x1=0,y1=0,x2=0,y2=0;
    int f1=a[i].first!=0,f2=a[i].second!=0;

    if(f1){
      x1=((1-xc)/a[i].first);
      x2=(n-xc)/a[i].first;

    }
    if(f2){
      y1=((1-yc)/a[i].second);
      y2=(m-yc)/a[i].second;
    }
    //   cout<<"x1,y1: "<<x1<<" "<<y1<<"x2,y2: "<<x2<<" "<<y2<<"\n";

      ll tp1=0,tp2=0;

    if(f1)      tp1=max(x1,x2);
    if(f2)      tp2=max(y1,y2);

      if(tp1<0 || tp2<0) continue;

      if(!f1) tp1=tp2;
      if(!f2) tp2=tp1;

      xc+=(f1*min(tp1,tp2)*a[i].first);
      yc+=(f2*min(tp1,tp2)*a[i].second);

      ans+=min(tp1,tp2);


    //   cout<<"xc: "<<xc<<" yc : "<<yc<<"\n";
    //   out(ans);


      
      

  }
    
   out(ans);


    
    return 0;
  

}