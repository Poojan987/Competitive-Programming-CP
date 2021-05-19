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
    string s;
    in(s);
    char temp=s[0];
    char temp1=s[0];
    int c=0;

    unordered_set<char>se;
    se.insert(s[0]);
    int f=0;
    for(int i=0;i<n;i++){
       if(s[i]!=temp){
           if(se.count(s[i])){
               f=1;
               break;
           }
           temp=s[i];
           se.insert(temp);


       }
       
        
    }
if(f==0){
    out("YES");
}
else{
    out("NO");
}

  }

    
    return 0;
  

}