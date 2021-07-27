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

int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
    priority_queue<pair<int,int> >q;
    int n=stations.size();
    if(startFuel>=target) return 0;
    int c=0;
    for(int i=0;i<n;i++){
        if(startFuel>=target){
            return c;
        }
        if(stations[i][0]<=startFuel){
            q.push(make_pair(stations[i][1],stations[i][0]));
        }
        else{
            pair<int,int>tp=q.top();
            q.pop();
            startFuel+=tp.second;
            c++;
        }
    }
    return -1;
}

int minRefuelStops1(int target, int startFuel, vector<vector<int>>& stations) {
    priority_queue<int >q;
    int n=stations.size();
    if(startFuel>=target) return 0;
    int c=0;
    for(int i=0;i<n;i++){
        if(startFuel>=target){
            return c;
        }
        if(stations[i][0]<=startFuel){
            q.push(stations[i][1]);
        }
        else{
            while(stations[i][0]<startFuel){
                if(q.size()==0) return -1;
                int tp=q.top(); 
                q.pop();
                startFuel+=tp;
                c++;
            }
            
            q.push(stations[i][1]);
        }
    }
    if(startFuel>=target){
            return c;
        }
    return -1;
}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

  int t;
  in(t);
  while(t--){
  

    } 

    
    return 0;
  

}