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
// int maxResult(vector<int>& nums, int k) {
//         int n=nums.size();
//         vector<int>dp(n,0);
//         multiset<int>s;
//         for(int i=0;i<n;i++){
//             // int maxi=dp[i-k>=0?i-k:0];
//             // for(int j=i-k>=0?i-k:0;j<i;j++){
//             //     maxi=max(maxi,dp[j]);
//             // }
//             if(s.size()==k+1){
//                 s.erase(s.find(i-k-1));
//             }
//             multiset<int>::reverse_iterator rit;
//             rit = s.rbegin();

//             dp[i]=*rit+nums[i];
//             s.insert(dp[i]);
//             cout<<dp[i]<<" ";
//         }
//         return dp[n-1];
// }
int maxResult(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>dp(n,0);
        deque<int>q;
        dp[0]=nums[0];
        q.push_back(0);
        for(int i=1;i<n;i++){
            if(q.front()<i-k) q.pop_front();
            dp[i]=dp[q.front()]+nums[i];

            while(q.size()&& dp[q.back()]<=dp[i]) q.pop_back();
            q.push_back(i);

            
        }
        
        return dp[n-1];
}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // out((int)'c')
      string s;
      in(s);
      
      



}