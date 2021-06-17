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
typedef long long  int ll;
using namespace std;

#define f(abcd,n) for(long long int abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";
int maxProduct(vector<string>& words) {
    int ans=0;
    int n=words.size();
    map<char,int>m[1000];
    for(int i=0;i<n;i++){
        for(auto c:words[i]){
            m[i][c]++;
        }
    } 
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int f=0;
            for(auto &itr1:m[i]){
                if(m[j].count(itr1.first)>0){
                    
                    f=1;
                    break;
                }
            }
            if(f==0){
                // cout<<words[i]<<" "<<words[j]<<"\n";
                // out(words[i].size()*(int)words[j].size());
                ans=max(ans,(int)words[i].size()*(int)words[j].size());
            }
        }
    }
    return ans;
}
 int main() {
    
int n;
in(n)
vector<string>v;
f(i,n){
    string s;
    in(s)
    v.push_back(s);
}
out(maxProduct(v));
    
    return 0;
  
// eae ea aaf bda fcf dc ac ce cefde dabae
}