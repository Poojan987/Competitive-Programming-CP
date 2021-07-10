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
        in(n)
        vector<int>v(n),ind(2*n+1,-1);
        f(i,n){
            in(v[i]);
            ind[v[i]]=i+1;
        }
        int maxi=(2*n)-1;
        int c=0;
        for(int i=0;i<n;i++){
            int z=1;
            if(v[i]==1){

            }
            while(v[i]*z<=maxi){
                // if(v[i]==z)continue;
                // cout<<v[i]*z<<"\n";
                if(ind[z]!=-1){
                    if(ind[z]+i+1==v[i]*z && v[i]<z){
                        // cout<<i+1<<" "<<z<<"\n";
                        c++;
                    }
                }
                z++;
            }
        }
        out(c);


    }
}