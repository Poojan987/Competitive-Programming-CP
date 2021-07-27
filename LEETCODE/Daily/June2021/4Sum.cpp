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

 vector<vector<int>> fourSum(vector<int>& nums, int target) {
     int n=nums.size();
        map<pair<int,int> ,set<pair<int,int> > >m;
        set<tuple<int,int,int,int> >seti;
        
        int c=0;
       sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int z=k+1;z<n;z++){
                        if(nums[i]+nums[j]+nums[k]+nums[z]==target){
                            tuple<int,int,int,int> tup;
                            tup={nums[i],nums[j],nums[k],nums[z]};
                            seti.insert(tup);

                            // m[make_pair(nums[i],nums[j]) ].insert(make_pair(nums[k],nums[z]));

                        }
                    }
                }
            }    

        }
        vector<vector<int> >finAns;
        for(auto&itr:seti){
            vector<int>tp;
            
                tp.push_back(get<0>(itr));
                tp.push_back(get<1>(itr));
                tp.push_back(get<2>(itr));
                tp.push_back(get<3>(itr));
            finAns.push_back(tp);
        }
        // for(auto&itr:m){
        //     vector<int>ans;
        //     ans.push_back(itr.first.first);ans.push_back(itr.first.second);
        //     for(auto&itr2:itr.second){
        //         ans.push_back(itr2.first);
        //         ans.push_back(itr2.second);
        //     }
        //     finAns.push_back(ans);
        // }
        return finAns;
}


int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

  int t;
  in(t);
  while(t--){
     int n,a,b;
     cin>>n>>a>>b;

     string s;
     in(s)
    ll sum=0;
    sum+=(a*n);

    if(b>=0){
        sum+=(b*n);
    }
    else{
        int z=1;
        char c=s[0];
        // while(s.size()){
        //     char c=s[0];
        //     // int mini
        //     for(int i=0;i<s.size();i++){

        //     }
        // }
        for(int i=1;i<n;i++){
            if(s[i]!=c){
                c=s[i];
                z++;
            }
        }
        sum+=(((z/2)+1)*(b));
        // cout<<"hello"<<z<<"\n";
    }
    out(sum);



} 

    
    return 0;
  

}