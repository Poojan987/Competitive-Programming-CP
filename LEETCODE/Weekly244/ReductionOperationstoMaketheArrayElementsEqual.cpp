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
int reductionOperations(vector<int>& nums) {
    map<int,int>m;
    int n=nums.size();
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        m[nums[i]]++;
        mini=min(mini,nums[i]);
    }
    map<int, int>::reverse_iterator it;
    int ans=0;
    int tp=0;
    for(it=m.rbegin();it!=m.rend();it++){
        if(it->first==mini){
            continue;
        }
        ans+=tp+it->second;
        tp+=it->second;
    }
    return ans;
}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // out((int)'c')
      string s;
      in(s);
      
      



}