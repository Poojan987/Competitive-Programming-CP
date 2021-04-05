#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <stddef.h>
#include <stdlib.h>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    bool co[1000001];
    memset(co, true, sizeof(co));

    for (int p = 2; p * p <= 1000000; p++)
    {

        if (co[p] == true)
        {

            for (int i = p * p; i <= 1000000; i += p)
                co[i] = false;
        }
    }

    // Print all prime numbers'
    // vector<int> v1;
    int count = 0;
    int v1[1000001];
    v1[0] = 0, v1[1] = 0;
    cout<<"hello";
    for (int p = 2; p <= 1000000; p++)
    {
        if (co[p])
        {
            count++;
        }
        v1[p] = count;
    }
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
cout<<v1[x];
        // cout << endl
        //      << "cos in Ranges : " << countcos(START, END);

        if (v1[x] > y)
        {
            printf("Divyam \n");
        }
        else
        {
            printf("Chef \n");
        }
    }

    return 0;
}