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
long long int cnt = 0;
int mod = 1000000007;
int n=0;
int lengthOfLIS(vector<int>& nums) {
    n=nums.size();
    vector<int>dp(n,-1);
    return recur(0,nums,INT_MIN,0,dp);
}
int recur(int ind,vector<int>&nums,int curr,int cnt,vector<int>&dp){
    if(ind>=n) return cnt;
    if(nums[ind]<=curr) return recur(ind+1,nums,curr,cnt,dp);
    int temp=nums[ind];
    // cout<<temp<<" ";
    int op1=recur(ind+1,nums,curr,cnt,dp);
    if(dp[ind]!=-1) return max(cnt+dp[ind],op1);
    
    int op2=recur(ind+1,nums,temp,cnt+1,dp);
    dp[ind]=op2-cnt;
    int tp=max(op1,op2);
    // if(ind==0){
    //     for(int i=0;i<n;i++)cout<<dp[i]<<" ";
    // }
    return tp;
}

int lengthOfLIS(vector<int>& nums) {
    int n=nums.size();
    vector<int> tp(n,INT_MAX);
    for(int i=0;i<n;i++){
        int z=lower_bound(tp.begin(),tp.end(),nums[i])-tp.begin();

        tp[z]=nums[i];
    }
}


int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    in(t);
    while (t--)
    {
        
    }
}
