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


// vector 
vector<string>arr;
int cnter=0;
void dfsLand(int n,int m,int i,int j,int cnt,vector<vector<bool> > &visitedLand){
    if(visitedLand[i][j]){
        return;
    }
    visitedLand[i][j]=true;
    
        cnter++;
        if(j+1<m && !visitedLand[i][j+1]){
            dfsLand(n,m,i,j+1,cnt+1,visitedLand);
        }
        if(j-1>=0 && !visitedLand[i][j-1]){
            dfsLand(n,m,i,j-1,cnt+1,visitedLand);
        }
        if(i+1<n && !visitedLand[i+1][j]){
            dfsLand(n,m,i+1,j,cnt+1,visitedLand);
        }
        if(i-1>=0 && !visitedLand[i-1][j]){
            dfsLand(n,m,i-1,j,cnt+1,visitedLand);
        }
// cout<<"cnt: "<<cnt<<"\n";
// cnter=cnt;
    
}
void solve(int n,int m){
    cnter=0;
 
//  vector<bool> visitedLand[n];
        vector<vector<bool> > visitedLand( n , vector<bool> (m));
        arr.clear();
    f(i,n){
        string s;
        in(s);
        arr.push_back(s);
        f(j,m){
            visitedLand[i][j]=(s[j]=='0'?true:false);
        }
    }
    vector<int>finalAns;
        f(i,n){
            f(j,m){
                if(!visitedLand[i][j])
                {
                    dfsLand(n,m,i,j,cnter,visitedLand);
                    finalAns.push_back(cnter);
                }
                cnter=0;
            }
            
        }
        sort(finalAns.rbegin(),finalAns.rend());
        ll z=0;
        for(int k=1;k<finalAns.size();k+=2){
            // cout<<"hey:"<<finalAns[k]<<" ";
            z+=finalAns[k];
        }
        // cout<<"ans:"<<(z)<<"\n";
        out(z);
  

}

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);



  int t;
  in(t);
  while(t--){
     ll r,b,d;
     cin>>r>>b>>d;
     ll maxi=max(r,b);
     ll mini=min(r,b);
     if( maxi-(mini*(d+1))<=0){
         out("YES");
     }
     else{
         out("NO");
     }
    

  }
   



    
    return 0;
  

}