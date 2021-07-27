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

#define f(abcd, n) for (ll abcd = 0; abcd < n; abcd++)
#define in(n) cin >> n;
#define print(n) cout << n;
#define out(n) cout << n << "\n";

int countPalindromicSubsequence(string s) {
    int n=s.size();
    unordered_map<char,vector<int> >m;
    for(int i=0;i<n;i++){
        m[s[i]].push_back(i);
    }
    int ans=0;
    for(int i=0;i<26;i++){
        char c=s[i]+i;
        int cCnt=0,ot=0;
        unordered_set<char>seti;
        for(int j=0;j<n;j++){
            
            if(s[j]==c){
                cCnt++;
                ans+=ot;
                ot=0;
                seti.clear();
            }
            else if(cCnt&& !seti.count(s[j])){
                ot++;
                seti.insert(s[j]);
            }
            
        }
        ans+=cCnt/3;
    }
}

// "tlpjzdmtwderpkpmgoyrcxttiheassztncqvnfjeyxxp"
// 161

int countPalindromicSubsequence(string s) {
    int n=s.size();
    unordered_map<char,vector<int> >m;
    for(int i=0;i<n;i++){
        m[s[i]].push_back(i);
    }
    int ans=0;
    for(int i=0;i<26;i++){
        char c=(char)('a'+i);
        cout<<c;
        int cCnt=0,ot=0;
        unordered_set<char>seti;
        for(int j=0;j<n;j++){
            
            if(s[j]==c){
                cCnt++;
                ans+=ot;
                ot=0;
                seti.clear();
            }
            else if(cCnt&& !seti.count(s[j])){
                ot++;
                seti.insert(s[j]);
            }
            
        }
        cout<<ans<<" ";
        ans+=cCnt/3;
    }
    return ans;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    in(t);
    while (t--)
    {
       
    }
}
