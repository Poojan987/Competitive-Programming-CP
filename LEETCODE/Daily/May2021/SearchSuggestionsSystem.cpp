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
typedef long long  int ll;
using namespace std;

#define f(abcd, n) for (long long int abcd = 0; abcd < n; abcd++)
#define in(n) cin >> n;
#define print(n) cout << n;
#define out(n) cout << n << "\n";
vector<vector<string> > suggestedProducts(vector<string>& products, string searchWord) {
    vector<vector<string> >ans;
    
    int n=products.size();
    sort(products.begin(),products.end());
    map<int,vector<int> > m;
    vector<bool>flags(n,1);
    
    for(int j=0;j<searchWord.size();j++){
        for(int i=0;i<n;i++){
            if(flags[i]==true && j<products[i].size() && searchWord[j]==products[i][j]){
                m[j+1].push_back(i);
            }
            else{
                flags[i]=false;
            }
        }
    }

    for(int j=1;j<=searchWord.size();j++){
        vector<string>tp;
        for(int i=0;i<m[j].size();i++){
            tp.push_back(products[m[j][i]]);
            if(tp.size()==3) break;
        }
        
        ans.push_back(tp);
    }
    return ans;
}
 int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    long long int n;
    in(n)

   
}