#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long total = n * (n + 1) / 2;
    if (total & 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        vector<long long> arr1, arr2;
        total /= 2LL;
        while (n)
        {
            if (total - n >= 0)
            {
                arr1.push_back(n);
                total -= n;
            }
            else
            {
                arr2.push_back(n);
            }
            n--;
        }
        cout << arr1.size() << endl;
        for (auto ele : arr1)
            cout << ele << " ";
        cout << endl;
        cout << arr2.size() << endl;
        for (auto ele : arr2)
            cout << ele << " ";
    }
    return 0;
}