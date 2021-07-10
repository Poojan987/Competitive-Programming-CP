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

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int n=arr.size();
    vector<int>diff(n),ans;
    priority_queue<pair<int,int> >pq;

    for(int i=0;i<n;i++){
        pq.push(make_pair(-abs(x-arr[i]),arr[i]));
    }
    
    while(k){
        pair<int,int> p=pq.top();
        pq.pop();
        ans.push_back(p.second);
        k--;
    }
    sort(ans.begin(),ans.end());
    return ans;
}

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int n=arr.size();
    vector<int>diff(n),ans;
    
    map<int,vector<int> >m;


    priority_queue<pair<int,int> >pq;

    for(int i=0;i<n;i++){
        pq.push(make_pair(-abs(x-arr[i]),arr[i]));
        m[abs(x-arr[i])].push_back(arr[i]);
    }
    
    // while(k){
    //     pair<int,int> p=pq.top();
    //     pq.pop();
    //     // ans.push_back(p.second);
    //     k--;
    // }

    for(auto&itr:m){
        for(int i=0;i<itr.second.size();i++){
            if(k!=0){
                ans.push_back(itr.second[i]);
                k--;
            }
        }    
    }

    sort(ans.begin(),ans.end());
    return ans;
}


int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // out((int)'c')
      string s;
      in(s);
      
      



}