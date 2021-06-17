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
bool isNumber(string s) {
    bool sign=0,num=0,exp=0,dec=0;

    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='+'|| s[i]=='-'){
            if(sign||dec||num) return false;
            sign=true;
        }
       else if(s[i]>='0'&& s[i]<='9') num=true;
       else if(s[i]=='e'||s[i]=='E'){
            if(exp|| num==0) return false;
            exp=true,num=false,sign=false;
        }
        else if(s[i]=='.'){
            if(dec||exp) return false;
            dec=true;
        }
        else{
            return false;
        }
        
    }
    return num;
}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // out((int)'c')
      string s;
      in(s);
      
      out(isNumber(s));



}