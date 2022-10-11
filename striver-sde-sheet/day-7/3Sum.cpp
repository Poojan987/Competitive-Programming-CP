// You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.
// An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.

// Bruteforce approach
// TC - O(n^3)
// SC - O(1)
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTripletsBF(vector<int> arr, int n, int K)
{

    // Set to keep the track of visited triplets.
    set<vector<int>> visited;
    vector<vector<int>> ans;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                // If we find a valid triplet.
                if (arr[i] + arr[j] + arr[k] == K)
                {
                    vector<int> triplet;
                    triplet.push_back(arr[i]);
                    triplet.push_back(arr[j]);
                    triplet.push_back(arr[k]);
                    // Sorting the triplet track distinct triplets.
                    sort(triplet.begin(), triplet.end());
                    if (visited.find(triplet) == visited.end())
                    {
                        ans.push_back(triplet);
                        visited.insert(triplet);
                    }
                }
            }
        }
    }

    return ans;
}

// OPTIMIZED APPROACH - Two Pointers and Sorting
// TC - O(n^2)
// SC - O(1)

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    vector<vector<int>> ans;
    // Sorting the vector.
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        int target = K - arr[i];
        int front = i + 1;
        int back = n - 1;

        while (front < back)
        {
            int sum = arr[front] + arr[back];

            // Finding answer which starts from arr[i].
            if (sum < target)
            {
                front++;
            }

            else if (sum > target)
            {
                back--;
            }

            else
            {
                int x = arr[front];
                int y = arr[back];
                ans.push_back({arr[i], arr[front], arr[back]});

                // Incrementing front pointer until we reach a different number.
                while (front < back && arr[front] == x)
                {
                    front++;
                }
                // Decrementing last pointer until we reach a different number.
                while (front < back && arr[back] == y)
                {
                    back--;
                }
            }
        }

        // Ensuring that we don't encounter duplicate values for arr[i].
        while (i + 1 < n && arr[i] == arr[i + 1])
        {
            i++;
        }
    }
    return ans;
}
