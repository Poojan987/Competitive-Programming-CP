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

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
   ll t=1;
//    in(t)
   while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    vector<ll>v(n);
    f(i,n) in(v[i])

    vector<vector<ll > >instruct(m);
    for(int i=0;i<m;i++){
        ll u,v,p;
        cin>>u>>v>>p;
        vector<ll>hey;
        hey.push_back(u);hey.push_back(v);hey.push_back(p);
        instruct[i]=hey;
    }
    vector<ll>operate(m,0);
    for(int i=0;i<o;i++){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        operate[l]++;
        if(r!=m-1){
            operate[r+1]--;
        }
        
    }

    for(int i=1;i<m;i++){
        operate[i]+=operate[i-1];
    }
    vector<ll>tp(n,0);
    for(int i=0;i<m;i++){
        // cout<<operate[i]<<" ";
        ll l=instruct[i][0],r=instruct[i][1],p=instruct[i][2];
        l--;r--;
        tp[l]+=operate[i]*p;
        if(r!=n-1){
            tp[r+1]-=operate[i]*p;
        }
    }
    for(int i=1;i<n;i++){
        tp[i]+=tp[i-1];
    }
    out("\n");
    for(int i=0;i<n;i++){
        cout<<tp[i]+v[i]<<" ";
    }
    out("\n");

   }
    
    return 0;
  

}