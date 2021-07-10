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

int moves[4][4]={{1,0},{-1,0},{0,1},{0,-1}};
int dp[50][50][51]={[0 ... 49] = {[0 ... 49] = {[0 ... 50] = -1}}};


bool outBound(int i,int j,int m,int n){
    return i<0||j<0||i>=m||j>=n;
}
int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
    if (maxMove==0) return 0;
    if(dp[startRow][startColumn][maxMove]!=-1) return dp[startRow][startColumn][maxMove];
    bool cur=outBound(startRow,startColumn,m,n);
    int tp=0;
    for(int i=0;i<4;i++){
        tp+=findPaths(m,n,maxMove-1,startRow+moves[i][0],startColumn+moves[i][1]);
    }
    dp[startRow][startColumn][maxMove]=tp;
    return tp;
    

}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

}