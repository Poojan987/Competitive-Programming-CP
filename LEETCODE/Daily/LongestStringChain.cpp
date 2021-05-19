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

    int longestStrChain(vector<string> &words)
    {
        unordered_set<string>seti;
        
       int ans=0;
       map<string,int>m[17];
       for(auto&itr:words){
           seti.insert(itr);
           m[itr.size()][itr]=0;
       }
       for(int i=16;i>1;i--){
           for(auto&itr:m[i]){
               out(i);
               out("val");
               out(m[i][itr.first]);
               for(int j=0;j<itr.first.size();j++){
                   string s=itr.first.substr(0,j)+itr.first.substr(j+1);
                    if(seti.count(s)){
                        if(m[i-1][s]>=16-i+1){
                            continue;
                        }
                        m[i-1][s]=max(itr.second+1,m[i-1][s]);
                        ans=max(ans,m[i-1][s]);
                    }
               }
           }
       }
       return ans+1;
    }


int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    in(n)
    vector<string> words;
    string tp="";
    f(i,n) {
        in(tp);
        words.push_back(tp);
    }
    out(longestStrChain(words));
    return 0;
}