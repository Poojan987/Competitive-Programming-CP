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
vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(string word:words){
            if(isSimilar(word,pattern)) ans.push_back(word);
        }
        
        return ans;
    }
    bool isSimilar(string s1,string s2){
        unordered_map<char,char>um1,um2;
        int n=s1.size();
        for(int i=0;i<n;i++){
            if((um1.count(s1[i])&&um1[s1[i]]!=s2[i])||(um2.count(s2[i])&&s1[i]!=um2[s2[i]])){
                return false;
            }
            else{
                um1[s1[i]]=s2[i];
                um2[s2[i]]=s1[i];
            }
            
        }
        return true;
    }

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    
    
    return 0;
  

}