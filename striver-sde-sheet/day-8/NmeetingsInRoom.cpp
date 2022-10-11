// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int s[], int f[], int n)
    {
        // Your code here
        pair<int, int> a[n + 1];
        int i;
        for (i = 0; i < n; i++)
        {
            a[i].first = f[i];
            a[i].second = s[i];
        }
        // Sorting of meeting according to their finish time.
        sort(a, a + n);

        // Time_limit to check whether new
        // meeting can be conducted or not.4
        int count = 1;
        int prev = a[0].first;
        for (int i = 1; i < n; i++)
        {
            if (a[i].second > prev)
            {
                count++;
                prev = a[i].first;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
} // } Driver Code Ends