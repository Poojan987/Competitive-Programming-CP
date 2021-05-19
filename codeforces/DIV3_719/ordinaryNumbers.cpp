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


int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

// cout<<(((double)sqrt(9)))<<" ";
// cout<<(((double)sqrt(9)));
// out("\n");

  int t;
  in(t);
  while(t--){
  
    int n;
    in(n);
    // string s="123456789";
    // string s="";
    vector<string>s;
    for(int i=0;i<9;i++){
        s.push_back(to_string(i+1));
    }
    if(n<10){
        out(n);
        continue;
    }
    int tp1=0;
    int c=9;
    while(true){
        int f=0;
        for(int i=0;i<s.size();i++){
            string tp=to_string(i+1);
            int val=stoi(s[i]+tp);
            // out(val);
            if(val>n){
                f=1;
                break;
            }
            s[i]+=tp;
            c++;
        
        }
        if(f==1){
            break;
        }
    }
out(c);
// out(s[0]);
  }

    
    return 0;
  

}