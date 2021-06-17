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


int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int n=nums.size();
        int maxi=nums[0];
        int ans=0;
        int tp=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=left&&nums[i]<=right) tp++;
            else if(nums[i]>right){
                ans+=(tp*(tp+1))/2;
                tp=0;
                
            }
            else{
//                 nums[i]<left
                
                int z=1;
                tp++;
                while(i+1<n && nums[i+1]<left){
                    z++;
                    tp++;
                    i++;
                }
                ans-=(z*(z+1))/2;
                
            }
        }
        if(tp>0)ans+=(tp*(tp+1))/2;
        return ans;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int n=nums.size();
        int tp1=0,tp2=0;
        int ans=0;
        for(int i=0;i<n;i++){
            tp1=(nums[i]<left)?tp1+1:0;
            tp2=(nums[i]<=right)?tp2+1:0;
            ans+=(tp2-tp1);
        }
        return ans;
    }


int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // out((int)'c')
      string s;
      in(s);
      
      



}