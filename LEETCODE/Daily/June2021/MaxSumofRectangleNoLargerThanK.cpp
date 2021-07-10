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


int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
    int m=matrix.size(),n=matrix[0].size();
    int maxi=INT_MIN;
    for(int i=0;i<m;i++){
        vector<int >col(n,0);
        for(int j=i;j<m;j++){
            for(int z=0;z<n;z++){
                col[z]+=matrix[j][z];
            }
            maxi=max(maxi,find(col,k));
        }
    }
    return maxi;
}
int find(vector<int>&col,int k){

    int result=INT_MIN;
    set<int>s;
    s.insert(0);
    // TreeSet<Integer> set = new TreeSet<>();
    // set.add(0);
    int prefixSum = 0;
    for(int i = 0; i < col.size(); i++) {
      prefixSum += col[i];

    //   Integer target = set.ceiling(prefixSum - k);

        auto target=s.lower_bound(prefixSum - k);
      if(target != s.end()) {
        result = max(result, prefixSum - *target);
      }
      s.insert(prefixSum);
    }

    return result;
}


int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // out((int)'c')
      string s;
      in(s);
      
      



}