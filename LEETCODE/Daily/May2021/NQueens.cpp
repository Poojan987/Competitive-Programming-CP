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


vector<vector<string>> ans;
vector<vector<string>> solveNQueens(int n)
{
    unordered_map<int,string>um;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            um[i]="Q.";
        }
    }
    vector<string> slate(n, string(n, '.'));
    
    give(slate, 0,"Q");

    return ans;
}
bool see(string st,vector<string> &slate, int r, int c)
{
   
    int n = size(slate);
     unordered_map<int,string>um;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            um[i]="Q.";
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (slate[i][c] == 'Q')
            return false;
            if (r + i < n && c - i >= 0 && slate[r + i][c - i] == 'Q')
            return false;
        if (r + i < n && c + i < n && slate[r + i][c + i] == 'Q')
            return false;
        if (r - i >= 0 && c - i >= 0 && slate[r - i][c - i] == 'Q')
            {
                return false;
            }
        if (r - i >= 0 && c + i < n && slate[r - i][c + i] == 'Q')
            return false;
        
    }
    return true;
}

void give(vector<string> &slate, int r,string st)
{

    if (r == size(slate))
    {
        
        ans.push_back(slate);
        
        return;
    }

    for (int c = 0; c < size(slate); c++){
       
        if (see(st,slate, r, c))
        {
            slate[r][c] = 'Q';
            
            give(slate, r + 1,st);
            
            slate[r][c] = '.';
        }
    }
}




// MY VERSION 1.0
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string >v;
        vector<vector<string> > ans;
        for(int i=0;i<n;i++){
            
            string tp;
            for(int j=0;j<n;j++){
                tp+='.';
                v.push_back(tp);
            }
        }
        for(int j=0;j<n;j++){
            v[0][j]='Q';
            vector<string> temp=v;
            solve(temp);
            v[0][j]='.';
        }
    }
    void solve(vector<string> &v){
        
    }
    void visitMarker(int r,int c,int n,vector<string> &v){
        //left
        for(int j=c-1;j>=0;j--){
            v[r][j]='1';
        }
        //right
        for(int j=c+1;j<n;j++){
            v[r][j]='1';
        }
        //up
        for(int i=r-1;i>=0;i--){
            v[i][c]='1';
        }
        //down
        for(int i=r+1;i<n;i++){
            v[i][c]='1';
        }
        //////////DIAGONAL
        //up-left
        int t1=r-1,t2=c-1;
        while(t1>=0 && t2>=0){
            v[t1][t2]='1';
            t1--;t2--;
        }
        //up-right
            t1=r-1,t2=c+1;
            while(t1>=0 && t2<n){
                v[t1][t2]='1';
                t1--;t2++;
            }
        //down-left
        t1=r+1,t2=c-1;
        while(t1<n && t2>=0){
            v[t1][t2]='1';
            t1++;t2--;
        }
        //down-right
        t1=r+1,t2=c+1;
        while(t1<n && t2<n){
            v[t1][t2]='1';
            t1++;t2++;
        }
        
        
        
    }
};