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

//  Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
vector<vector<int>> levelOrder(TreeNode* root) {
    queue<TreeNode*> q;
    vector<vector<int>> ans;

    
    if(root==NULL){
        return ans;

    }
    q.push(root);
    vector<int>temp;
    temp.push_back(q.front()->val);
    ans.push_back(temp);
    
    
    while(q.size()){
        vector<int>temp;
        int n=q.size();
        for(int i=0;i<n;i++){
            if(q.front()!=NULL){
                
                if(q.front()->left!=NULL){
                    temp.push_back(q.front()->left->val);
                }
                if(q.front()->right!=NULL){
                    temp.push_back(q.front()->right->val);
                }
                q.push(q.front()->left);
                q.push(q.front()->right);
            }
            q.pop();
        }
        if(temp.size())
            ans.push_back(temp);

    }
    return ans;
}
void BFS(queue<int>&q){
    // if(root==NULL) return;
    
}
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
    
    return 0;
  

}