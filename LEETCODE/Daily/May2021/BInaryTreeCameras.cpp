//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/600/week-3-may-15th-may-21st/3745/

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


int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
   }
   class Solution {
public:
    int Vans = 0;
    int minCameraCover(TreeNode* root) {
        return depth(root) > 2 ? Vans + 1 : Vans;
    }
    int depth(TreeNode* node) {
        if (node==NULL) {
            return 0;
        }
        int val1 = depth(node->left) ;
        int val2= depth(node->right);
        int p=val1+val2;
        if (p == 0) return 5;
        if (p < 3) return 0;
        Vans++;
        return 5%2;
    }


};
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);






    
    return 0;
  

}