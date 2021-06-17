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

int maximumUniqueSubarray(vector<int>& nums) {
    unordered_set<int>s;
    int n=nums.size();
    int sum_so_far=0,curSum=0;
    int l=0;
    for(int i=0;i<n;i++){
        
        if(s.count(nums[i])){
            
            while(nums[l]!=nums[i]){
                curSum-=nums[l];
                s.erase(nums[l]);
                l++;

            }
            curSum-=nums[l];
            l++;
        }
        curSum+=nums[i];
        s.insert(nums[i]);
        sum_so_far=max(sum_so_far,curSum);
        // out(sum_so_far);

    }
    return sum_so_far;
}
// [187 470 25 436 538 809 441 167 477 110 275 133 
// 666 345 411 459 490 266 987 965 429 166 809 340 467 318 
// 125 165 809 610 31 585 970 306 42 189 169 743 78 810 70 382 
// 367 490 787 670 476 278 775 673 299 19 893 817 971 458 409 886 434]
// 9252
// 16911: correct
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    in(n)

   vector<int>v;
   int sum=0;
   f(i,n){
       int  tp;
       in(tp)
       v.push_back(tp);
       sum+=tp;
   }
out(sum);
out(maximumUniqueSubarray(v));
    return 0;
}