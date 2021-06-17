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
	int n = nums.size(), cur_sum = 0, ans = 0, l = 0, r = 0;
	unordered_set<int> s;
	while(r < n) {
		while(s.find(nums[r]) != end(s))          // delete from current sub-array till there's a duplicate of nums[r]
			cur_sum -= nums[l], s.erase(nums[l++]);
		cur_sum += nums[r], s.insert(nums[r++]);  // pick nums[r] and update cur_sum
		ans = max(ans, cur_sum);                  // finally update ans to hold the maximum of all subarray sums till now
	}
	return ans;
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