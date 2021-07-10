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

int longestOnes(vector<int>& nums, int k) {
    int strtInd =0;
    int curInd=0;

    int n=nums.size();
    int ans=0,c=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(i>0) c--;
        if(i>0 && nums[i-1]==0){
            k++;
        }
        while(k){
            if(strtInd>=n) break;
            if( nums[strtInd]==0) k--;

            c++;
            strtInd++;
            
        }
        
        maxi=max(c,maxi);
        if(strtInd>=n) break;
    }
    return maxi;
}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // out((int)'c')
      string s;
      in(s);
      
      



}