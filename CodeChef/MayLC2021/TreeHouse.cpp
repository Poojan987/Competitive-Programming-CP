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


// vector<ll> adjacencyList[1500001];
// ll visited[1500001];

ll mod=1000000007;
ll dfs(ll index,vector<vector<ll> > &adjacencyList,vector<ll> &visited,ll x){
    
    vector<ll>v;
    if(visited[index]==0){
        
        visited[index]=1;
        for(ll i=0;i<adjacencyList[index].size();i++){
            if(visited[adjacencyList[index][i]]==0){
                ll tp=dfs(adjacencyList[index][i],adjacencyList,visited,x);
                v.push_back(tp);
            }
        }

        sort(v.rbegin(),v.rend());
        ll sum=1,mul=1;
        for(ll i=0;i<v.size();i++){
            sum=((sum)+((mul)*(v[i])));
            mul++;
        }
        
        return sum;
    }
    return 0;
    
    
}

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // out(3%5*2%5);
    // out((3%5)*(2%5));
    ll t;
    in(t);
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector< vector<ll> > adjacencyListNew;
        adjacencyListNew.resize(n+1);
        
        for(ll i=1;i<=n-1;i++){
            ll u,v; 
            in(u);in(v);
            
            adjacencyListNew[u].push_back((v));
            adjacencyListNew[v].push_back((u));
        }
       
        vector<ll> visited;
        visited.resize(n+1);
        for(ll i=0;i<=n;i++) visited[i]=0;

       out( dfs(1,adjacencyListNew,visited,x)%mod*x%mod)
    
    }

return 0;
}