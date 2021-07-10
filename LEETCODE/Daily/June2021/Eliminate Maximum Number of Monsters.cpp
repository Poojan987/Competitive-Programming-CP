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
int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
    vector<int>time;
    priority_queue<int>pq;
    int n=dist.size();
    for(int i=0;i<n;i++){
        time[i]=dist[i]/speed[i];
        pq.push(time[i]);

    }
    int k=0;
    while(pq.size()){

        int evict=pq.top()-k;
        if(evict<0) break;
        k++;
        pq.pop();
    }
    return k;

}

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // out((int)'c')
      string s;
      in(s);
      
      



}