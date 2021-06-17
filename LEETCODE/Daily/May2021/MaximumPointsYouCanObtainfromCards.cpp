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

int maxScore(vector<int>& cardPoints, int k) {
        int totalSum=0,backSum=0;
        int n=cardPoints.size();
        // out("helloc");
        for(int i=0;i<cardPoints.size();i++){
            totalSum+=cardPoints[i];
            // out("helloc");
            if(i>n-k-1){
              backSum+=cardPoints[i];
            }

        }
        int maxi=backSum;
        int s=0,back=n-k;
        while(k--){
          // cout<<s<<" "<<back<<"\n";
          if(s>=n) break;
          backSum+=cardPoints[s];
          if(back<n){
            backSum-=cardPoints[back];
          }
          maxi=max(maxi,backSum);
          s++;back++;
        }

        return maxi;

        
    }
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
  int n,k;
  in(n);
  in(k);
  vector<int > v;
  f(i,n) {
    int tp;
    in(tp);
    v.push_back(tp);
  };
    out(maxScore(v,k));
    
    return 0;
  

}