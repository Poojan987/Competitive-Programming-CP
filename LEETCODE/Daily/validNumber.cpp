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
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int decimalFinal=0,intFinal=0;
    int n=s.size();
    int deci=s.find('.');
    int exp=s.find('e');
    int signBool=0,deciBool=0;
    if(s[0]=='+'||s[0]=='-'){
        signBool=1;
    }
    if(deci!=-1){
        deciBool=1;
    }
    for(int i=0;i<s.size();i++){
        int validChar=(int)s[i];
        if(i>0 && i<exp && (s[i]=='+'||s[i]=='-')){
            return false;
        }
        if(i>0 && i>exp+1 && (s[i]=='+'||s[i]=='-')){
            return false;
        }
        if(s[i]=='e'&& i!=exp){
            return false;
        }
        if(s[i]=='.'&& i!=deci){
            return false;
        }
        if(validChar==101|| validChar==69){
            continue;
        }
        else if(validChar>=65 ){
            return false;
        }
    }
    if(deciBool){
        
        int c1=0,c2=0;
            for(int i=0;i<n;i++){
                if(i==exp) break;
                if(i==deci) continue;
                if(s[i]=='+'||s[i]=='-') continue;
                else{
                    if(i>deci) c2++;
                    else c1++;
                }

            }
        //cond1
        int f1=0,f2=0,f3=0;
        if(c1>0) f1=1;
        else if(c1>0&&c2>0) f2=1;
        else if(c2>0)f3=1;
        
        if(f1==0&&f2==0&&f3==0) return false;
        else decimalFinal=1;
        
    }
    else{
        int f1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='e') break;
            if(s[i]=='+'||s[i]=='-') continue;
            f1=1;
            break;
        }
        if(f1==0) return false;
        // else intFinal=1;
    }
    if(exp==-1) return true;
    int c1=0;
    for(int i=exp+1;i<n;i++){
        if(s[i]=='.') return false;
        if(s[i]=='+'|| s[i]=='-') continue;
        c1++;
        // break;
    }
    if(c1==0) return false;
    
    return true;

}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // out((int)'c')
      string s;
      in(s);
      
      out(isNumber(s));



}