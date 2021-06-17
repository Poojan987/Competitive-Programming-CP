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
int longestConsecutive(vector<int>& nums) {
 int n=nums.size()   ;
 if(n==0) return 0;
 unordered_set<int>s;
 unordered_map<int,int>m;
 for(int i=0;i<n;i++){
     s.insert(nums[i]);

 }
 int maxi=1;
 for(int i=0;i<n;i++){
     if(!s.count(nums[i])){
         continue;

     }
     int temp=nums[i];
     int c=0;
     while(s.count(temp)){
        //  s.erase(temp);
        if(m.count(temp)){
            c+=m[temp];
            break;
        }
         c++;
         temp+=1;
     }
     m[nums[i]]=c;
     maxi=max(c,maxi);
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