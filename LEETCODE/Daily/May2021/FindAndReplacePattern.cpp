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
        unordered_set<char>s;
        int n=pattern.size();
        map<int,vector<int> >m;
        for(int i=0;i<n;i++){
            if(s.count(pattern[i])) continue;
            s.insert(pattern[i]);
            for(int j=i;j<n;j++){
                if(pattern[j]==pattern[i]){
                    m[i].push_back(j);
                }
            }

        }

        for(auto word:words){
            map<int,vector<int> >mWord;
            unordered_set<char>sWord;
            for(int i=0;i<n;i++){
                if(sWord.count(word[i])) continue;
                sWord.insert(word[i]);
                for(int j=i;j<n;j++){
                    if(word[j]==word[i]){
                        mWord[i].push_back(j);
                    }
                }

            }
            int f=0;
            for(auto &itr:mWord){
                int n1=itr.second.size();
                int n2=m[itr.first].size();
                if(n1!=n2){
                    f=1;
                    break;
                }
                for(int i=0;i<n1;i++){
                    if(itr.second[i]!=m[itr.first][i]){
                        f=1;
                        break;
                    }
                }
                if(f==1) break;
            }
            if(f==0){
                ans.push_back(word);
            }
        }
        return ans;
    }

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    int n;
    in(n)
  vector<string> words;
  f(i,n){
      string temp;
      in(temp)
       words.push_back(temp);

  }
  string pattern;
  in(pattern)
//   vector ans=

  
    
    return 0;
  

}