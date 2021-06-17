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
int countGoodSubstrings(string s) {
    int n=s.size();
    if(n<=2) return 0;
        char s1=s[0],s2=s[1];
        int i1=0,i2=1;
        int cnt=0;
        for(int i=2;i<n;i++){
            if(s[i]!=s1 && s[i]!=s2 && s1!=s2){
                cnt++;
            }
            s1=s[++i1],s2=s[++i2];
        }
        return cnt;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    in(n)

   
}