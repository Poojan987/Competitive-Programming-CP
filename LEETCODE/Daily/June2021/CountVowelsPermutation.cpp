#include <iostream>
#include <bits/stdc++.h>
#include<set>
#include<stddef.h>
#include<stdlib.h>
#include <unordered_set>
#include<unordered_map>
#include<map>
#include<string>
#include<ctype.h>
#include <queue>
// #pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;

#define f(abcd,n) for(int abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";
long long int cnt=0;
int mod=1000000007;
int countVowelPermutation(int n) {
    
    vector<vector<long long int> >dp(5);
    for(int i=0;i<5;i++){
        for(int j=0;j<=n;j++){
            dp[i].push_back(0);
        }
    }
    unordered_map<char,vector<char> >m;

    m['a'].push_back('e');

    m['e'].push_back('a');m['e'].push_back('i');

    m['i'].push_back('a');m['i'].push_back('e');m['i'].push_back('o');m['i'].push_back('u');

    m['o'].push_back('i');m['o'].push_back('u');

    m['u'].push_back('a');


    vector<string>ans={"a","e","i","o","u"};
    for(int i=0;i<5;i++){
        recur(1,n,ans[i],m,dp);
    }
    return cnt%mod;
    
    
}
void recur(int curCnt,int n,string s,unordered_map<char,vector<char> >&m,vector<vector<long long int> >&dp){
    // cout<<curCnt<<" "<<cnt<<" "<<s<<"\n";
    if(curCnt==n) {
        cnt++;
        cnt%=mod;
        return ;
    }
    char c=s[s.size()-1];
    int hey=0;
    if(c=='e'){
        hey=1;
    }
    else if(c=='i') hey=2;
    else if(c=='o') hey=3;
    else if(c=='u') hey=4;
    if(dp[hey][curCnt]){
        cnt+=dp[hey][curCnt];
        return;
    }
    
    long long int tp=cnt%mod;
    for(int i=0;i<m[c].size();i++){
        string z="";
        z+=m[c][i];
        recur(curCnt+1,n,z,m,dp);
    }
    tp=(cnt-tp)%mod;
    dp[hey][curCnt]=tp%mod;
}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // out((int)'c')
      string s;
      in(s);
      
      



}