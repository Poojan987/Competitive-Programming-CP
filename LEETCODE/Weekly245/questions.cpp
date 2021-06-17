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
bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
    int n=triplets.size();
    vector<int>tp;
    for(int i=0;i<3;i++){
        int f=0;
        for(int j=0;j<n;j++){
            if(i==0){
                if(target[0]==triplets[j][0] && target[1]>=triplets[j][1] && target[2]>=triplets[j][2]){
                    f=1;
                    tp=triplets[j];
                }
            }
            else if(i==1){
                if(target[0]>=triplets[j][0] && target[1]==triplets[j][1] && target[2]>=triplets[j][2]){
                    f=2;
                    tp=triplets[j];
                }
            }
            else{
                if(target[0]>=triplets[j][0] && target[1]>=triplets[j][1] && target[2]==triplets[j][2]){
                    f=3;
                    tp=triplets[j];
                }
            }

        }
        if(f==0) return false;
    }
    return true;


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