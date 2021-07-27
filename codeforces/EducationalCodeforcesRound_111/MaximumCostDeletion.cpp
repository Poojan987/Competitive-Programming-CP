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