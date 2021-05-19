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

int minSwaps(string s) {
        // vector<int >oneC,zeroC;
        int num=0;
        char temp='c';
        int oneC=0,zeroC=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==temp){
                num++;
                // if(temp=='1'){
                //     oneC.push_back(i);
                // }
                // else{
                //     zeroC.push_back(i);
                // }
            }
            else{
                temp=s[i];
            }
            if(s[i]=='1') oneC++;
            else zeroC++;
        }
        if(num==0) return 0;
        // if(oneC!=zeroC) return -1;
        string tempo=s;
        string hey="";
        char first=s[0];
        hey+=first;
        int len=1;
        int n=s.size();
        
        while(len!=n){
            // out(hey);
            if(hey[len-1]=='1'){
                hey+='0';
            }
            else{
                hey+='1';
            }
            len++;
            // out(hey);

        }
        string hey2="";
        for(int i=0;i<n;i++){
            if(hey[i]=='1') hey2+='0';
            else hey2+='1';
        }
        int f1=0,f2=0;
        int oneChey=0,zeroChey=0;
        int oneChey2=0,zeroChey2=0;
        for(int i=0;i<n;i++){
            if(hey[i]=='1'){
                oneChey++;
            }
            else{
                zeroChey++;
            }
            if(hey2[i]=='1'){
                oneChey2++;
            }
            else{
                zeroChey2++;
            }
        }

        if(zeroC!=zeroChey || oneChey!=oneC){
            f1=-1;
        }
        if(zeroC!=zeroChey2 || oneChey2!=oneC){
            f2=-1;
        }
        if(f1==-1 && f2==-1) return -1;
        int num1=0,num2=0;
        if(f1!=-1){
            
            for(int i=0;i<n;i++){
                if(s[i]!=hey[i]) num1++;
            }
        }
        if(f2==0){
            
            for(int i=0;i<n;i++){
                
                if(s[i]!=hey2[i]) num2++;
            }
            
        }
        
        if(f1==-1) num=num2;
        else if(f2==-1) num=num1;
        else{
            num=min(num1,num2);
        }
        return num/2;
        


        
    }
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
  
      string s;
      in(s);
      out(minSwaps(s));



}