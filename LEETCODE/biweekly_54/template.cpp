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
bool isCovered(vector<vector<int>>& ranges, int left, int right) {
    int n=ranges.size();
    
    for (int i=left;i<=right;i++){
        int f=0;    
        for(int j=0;j<n;j++){
            if(i>=ranges[j][0]&&i<=ranges[j][1]){
                f=1;
                break;
            }
        }
        if(f==0) return false;
    } 
    return true;       
}


int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum+=chalk[i];
        }
        k-=(k/sum);
        for(int i=0;i<n;i++){
            if(k<chalk[i]){
                return i;
            }
            k-=chalk[i];
        }
    }
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

  int t;
  in(t);
  while(t--){
  

    } 

    
    return 0;
  

}