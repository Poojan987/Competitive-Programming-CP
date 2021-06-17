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
int mod=1000000007;
int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
    vector<pair<long long int,long long int> >p;
   for(int i=0;i<n;i++){
       p.push_back(make_pair(efficiency[i],speed[i]));
   }
   sort(p.rbegin(),p.rend());
   map<long long int,vector<pair<long long int,long long int> > >m;
   for(int i=0;i<n;i++){
       m[(p[i].first*p[i].second)%mod].push_back(p[i]);
   } 
    priority_queue<long long int>q;
    long long int best=0,totalSpd=0;
    for(int i=0;i<n;i++){
        long long int speedCur=p[i].second;
        q.push(-speedCur);
        if(q.size()<=k){
            totalSpd+=speedCur;
        }
        else{
            totalSpd+=speedCur+q.top();
            q.pop();

        }
        best=max(best,(totalSpd*p[i].first));
    }
    return best%mod;
    
    
    
}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // out((int)'c')
      string s;
      in(s);
      
      



}