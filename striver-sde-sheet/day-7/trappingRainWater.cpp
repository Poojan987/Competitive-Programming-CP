#include <bits/stdc++.h>
using namespace std;

// Bruteforce
// TC = O(n^2)

// Iterate over the array
// Find the max to the left of the current index and right of the current index
// water trapped = min(max to the left, max to the right) - current

// Optimized Approach - DP
// TC = O(n)
// SC = O(n)

// Idea is rather than finding max to the left and max to the right for every index we can actually store it

class Solution
{
public:
    int trap(vector<int> &height)
    {
        if (height.empty())
            return 0;
        int ans = 0;
        int size = height.size();
        vector<int> left_max(size), right_max(size);
        left_max[0] = height[0];
        for (int i = 1; i < size; i++)
        {
            left_max[i] = max(height[i], left_max[i - 1]);
        }
        right_max[size - 1] = height[size - 1];
        for (int i = size - 2; i >= 0; i--)
        {
            right_max[i] = max(height[i], right_max[i + 1]);
        }
        for (int i = 1; i < size - 1; i++)
        {
            ans += min(left_max[i], right_max[i]) - height[i];
        }
        return ans;
    }
};

// OPTIMIZED APPROACH - Stack
// TC = O(n)
// Instead of storing the largest bar upto an index as in Approach 2, we can use stack to keep track of the bars that are bounded by longer bars and hence, may store water. Using the stack, we can do the calculations in only one iteration.
// We keep a stack and iterate over the array. We add the index of the bar to the stack if bar is smaller than or equal to the bar at top of stack, which means that the current bar is bounded by the previous bar in the stack. If we found a bar longer than that at the top, we are sure that the bar at the top of the stack is bounded by the current bar and a previous bar in the stack, hence, we can pop it and add resulting trapped water to \text{ans}ans.

int trap(vector<int> &height)
{
    int ans = 0, current = 0;
    stack<int> st;
    while (current < height.size())
    {
        while (!st.empty() && height[current] > height[st.top()])
        {
            int top = st.top();
            st.pop();
            if (st.empty())
                break;
            int distance = current - st.top() - 1;
            int bounded_height = min(height[current], height[st.top()]) - height[top];
            ans += distance * bounded_height;
        }
        st.push(current++);
    }
    return ans;
}
