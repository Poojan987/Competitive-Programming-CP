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


int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    in(t);
    while(t--){
        int n;
        in(n);
        vector<int>v(n);
        for(int i=0;i<n;i++){
            v[i]=i+1;
        }
        if(n%2==0){
            for(int i=0;i<n;i+=2){
                int temp=v[i+1];
                v[i+1]=v[i];
                v[i]=temp;

            }
        }
        else{
            for(int i=0;i<n-1;i+=2){
                int temp=v[i+1];
                v[i+1]=v[i];
                v[i]=temp;

            }
            int temp=v[n-1];
            v[n-1]=v[n-2];
            v[n-2]=temp;
            
        }
        f(i,n){
            cout<<v[i]<<" ";
        }
        out("\n");
    }
}