#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <stddef.h>
#include <stdlib.h>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <string>
#include <ctype.h>
#include <queue>
// #pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;

#define f(abcd, n) for (int abcd = 0; abcd < n; abcd++)
#define in(n) cin >> n;
#define print(n) cout << n;
#define out(n) cout << n << "\n";


vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    int n=edges.size();
    vector<vector<int> >adjacency(n+1);
    vector<bool>visited(n+1,false);
    int val1=min(edges[0][0],edges[0][1]);
    
    for(int i=0;i<n;i++){
        adjacency[ edges[i][0]].push_back(edges[i][1]);
        adjacency[ edges[i][1]].push_back(edges[i][0]);
        if(dfs(edges,visited,edges[i][0],adjacency)) return vector<int>{edges[i][0],edges[i][1]};
        for(int j=1;j<=n;j++) visited[j]=false;

    }
return vector<int>{NULL};


}
bool dfs(vector<vector<int>>& edges,vector<bool>&visited,int ind,vector<vector<int> >&adjacency,int par=-1){
    // if(ind==par) return false;
    if(visited[ind]) return true;

    visited[ind]=true;
    for(int i=0;i<adjacency[ind].size();i++){
        if(adjacency[ind][i]==par) continue;
        if(visited[adjacency[ind][i]]) return true;
        if(dfs(edges,visited,adjacency[ind][i],adjacency,ind)) return true;
    }
    return false;
}



vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    int n=edges.size();
    vector<vector<int> >adjacency(n+1);
    vector<bool>visited(n+1);
    
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.count(edges[i][0])&&s.count(edges[i][1])) return vector<int>{edges[i][0],edges[i][1]};
        s.insert(edges[i][0]);
        s.insert(edges[i][1]);

    }
return vector<int>{NULL};
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    in(t);
    while(t--){
       

    }
}