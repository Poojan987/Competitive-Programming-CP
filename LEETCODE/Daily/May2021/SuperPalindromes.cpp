// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/599/week-2-may-8th-may-14th/3736/


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


ll gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
   }
 

bool isPalindromeString(string s){
    int strt=0,end=s.size()-1;
    while(strt<end){
        if(s[strt]!=s[end]) return false;
        strt++;
        end--;
    }
    return true;
}
bool isPalindromeInt(long long int num){
    long long int temp=num;
    long long int revInt=0;
    while(num>0){
        int curDigit=num%10;
        revInt=(revInt*10)+curDigit;
        num/=10;
    }
    if(revInt==temp) return true;
    return false;
}
string toStr(long long int num){
    string s="";
    while(num>0){
        s+='0'+(num%10);
        num/=10;
    }
    reverse(s.begin(),s.end());
    return s;

}
string toStrRev(long long int num){
    string s="";
    while(num>0){
        s+='0'+(num%10);
        num/=10;
    }
    return s;

}
long long int converToInteger(string s){
    long long int num=0;
    for(int i=0;i<s.size();i++){
        num=(num*10)+(s[i]-'0');
    }
    return num; 
}
int superpalindromesInRange(string left, string right) {
    int count=0;
    long long int leftInt=converToInteger(left),rightInt=converToInteger(right);
    
    

     for(int i=1;i<=100000;i++){
         string s1=toStr(i);
         string s2=toStrRev(i);
         string whole1=s1+s2;
         string s2Final="";
         for(int j=1;j<s2.size();j++){
             s2Final+=s2[j];

         }
         string whole2=s1+s2Final;


         long long int num1=converToInteger(whole1);
         long long int num2=converToInteger(whole2);
         long long int num1S;
         long long int num2S;
        int f1=0,f2=0;
         if(num1>1000000000){
              
            f1=1;
         }
         else num1S=num1*num1;
         if(num2>1000000000){
              
            f2=1;
         }
         else num2S=num2*num2;
         
         
       
        
         
         if(f1==0 && num1S>=leftInt && num1S<=rightInt && isPalindromeInt(num1S) ){
             count++;
         }
         if(f2==0 && num2S>=leftInt && num2S<=rightInt && isPalindromeInt(num2S) ){
             count++;
         }
      }   
     return count;
}


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
     string s1,s2;
    cin>>s1>>s2;
   
    out(superpalindromesInRange(s1,s2));
    
   
    
  
    
    return 0;
  

}