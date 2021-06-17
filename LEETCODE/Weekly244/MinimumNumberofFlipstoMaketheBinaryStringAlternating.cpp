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
int minFlips(string s) {
    int cnt=1;
    int n=s.size();
    char c=s[0];
    int maxCnt=0;
    int ind=0;
        int flag=0;
        for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            flag=1;
            break;
           
        }
        
    }
        if(flag==0) return 0;
     for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            cnt++;
        }
        else{
            cnt=1;
            
        }
        if(maxCnt<cnt){
            ind=i;
            maxCnt=cnt;

        }
    }
    int FirstPos=ind-maxCnt+1;
    string back="";
    for(int i=0;i<FirstPos;i++){
        back+=s[i];
    }
    string front=s.substr(FirstPos);
    string now=front+back;
    int ans=0;
    int fC=now[0];
    cout<<front<<" "<<back<<" "<<now;
    for(int i=1;i<n;i++){
        if(now[i]==now[i-1]){
            ans++;
            now[i]=now[i-1]=='0'?'1':'0';
        }
        
    }
    return ans;

}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // out((int)'c')
      string s;
      in(s);
      
      



}