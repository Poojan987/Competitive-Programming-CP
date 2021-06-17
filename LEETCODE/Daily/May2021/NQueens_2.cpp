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

vector<vector<string> >ans;
vector<vector<string>> solveNQueens(int n) {
    vector<string>board(n,string(n,'.'));
    solve(board,0,n);
    return ans;
}
bool isSafe(vector<string>&board,int row,int col){
    int n=board.size();
    for(int i=0;i<board.size();i++){
        if(row-i>=0&&col-i>=0 && board[row-i][col-i]=='Q') return false;
        if(row-i>=0 && board[row-i][col]=='Q') return false;
        if(row-i>=0&&col+i<n && board[row-i][col+i]=='Q') return false;
    }
    return true;
}
void solve(vector<string> &board,int row,int n){
    if(row==n) {
        ans.push_back(board);
        return;
    }
    for(int col=0;col<n;col++){
        if(isSafe(board,row,col)){
            board[row][col]='Q';
            solve(board,row+1,n);
            board[row][col]='.';
        }
    }
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    in(n)

   
}