
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

int maximumGap(vector<int>& nums) {
        int n=nums.size();
        vector<int>bucketMin(n-1,INT_MAX),bucketMax(n-1,INT_MIN);
        
        int mini=INT_MAX,maxi=INT_MIN;
        if(n<=1) return 0;
        
        for(int i=0;i<n;i++){
            mini=min(nums[i],mini);
            maxi=max(nums[i],maxi);
        }
        if(n==2) return maxi-mini;
        int avgGap=(maxi-mini)%(n-1)?((maxi-mini)/(n-1))+1:(maxi-mini)/(n-1);
        for(int i=0;i<n;i++){
            if(nums[i]==mini||nums[i]==maxi) continue;
            int buckFiller=(nums[i]-mini)/avgGap;
            
            bucketMin[buckFiller]=min(bucketMin[buckFiller],nums[i]);
            bucketMax[buckFiller]=max(bucketMax[buckFiller],nums[i]);
        }
        int ans=0;
        int strt=0;
        int previous=mini;
        for(int i=0;i<n-1;i++){
            if(bucketMin[i]==INT_MAX &&bucketMax[i] ==INT_MIN) continue;
            ans=max(ans,bucketMin[i]-previous);
            previous=bucketMax[i];
//             cout<<bucketMin[i]<<" "<<bucketMax[strt]<<"\n";
//             if(bucketMin[i]==INT_MAX) continue;
//             while(strt<n-1 && bucketMax[strt]==INT_MIN) strt++;
//             if(i<strt) continue;
            
//             ans=max(bucketMin[i]-bucketMax[strt],ans);
//             strt++;
        }
        ans=max(ans,maxi-previous);
        return ans;
    }