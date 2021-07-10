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

// vector<int> countSmaller(vector<int>& nums) {
//     int n=nums.size();
//     multiset<int>ms;
//     for(int i=0;i<n;i++){
//         ms.insert(nums[i]);
//     }
//     vector<int>ans;
//     for(auto&itr:ms){
//         cout<<itr<<" ";
//     }
//     for(int i=0;i<n;i++){
//         auto itr1=ms.lower_bound(nums[i]);

//         int z = std::distance( ms.begin(), itr1 );

//         if(z >0){

//             // cout<<(*itr1)-1<<" ";
//             ans.push_back((z)-1);
//         }
//         else{
//             // cout<<0<<" ";
//             ans.push_back(0);
//         }
//         ms.erase(*itr1);
//         cout<<"\n";
//             for(auto&itr:ms){
//             cout<<itr<<" ";
//         }

//     }
//     return ans;
// }
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>     // Including tree_order_statistics_node_update
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <functional>
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
class Solution
{
public:
    vector<int> countSmaller(vector<int> &nums)
    {

        vector<int>     hey(nums.size(), 0);
        ordered_set os;

        os.insert(nums[nums.size() - 1]);

        for (int i = nums.size() - 2; i >= 0; i--)
        {
            int tp = os.order_of_key(nums[i]);os.insert(nums[i]);hey[i] = tp;
        }
        return hey;
    }
};
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