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

#define f(abcd,n) for(long long int abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";

long long int toVal(string s){
    long long int num=0;
    long long int fNeg=0;
    for(char c:s){
        if(c=='-'){
            fNeg=1;
        }
        else{
            num=(num*10)+(c-'0');
        }
    }
    if(fNeg==1) num*=-1;
    return num;
}
long long int evalRPN(vector<string>& tokens) {
    stack<long long int>pile,op;
    long long int sum=0;
    for(string s:tokens){
        
        if(s=="-"){
            long long int num2=pile.top();
            pile.pop();
            long long int num1=pile.top();
            pile.pop();
            long long int newV=num1-num2;
            pile.push(newV);
            sum+=(num1-num2);
            continue;
            
        }
       else if(s=="+"){
            long long int num2=pile.top();
            pile.pop();
            long long int num1=pile.top();
            pile.pop();
            long long int newV=num1+num2;
            pile.push(newV);
            sum+=(num1+num2);

            continue;
        }
       else if(s=="/"){
            long long int num2=pile.top();
            pile.pop();
            long long int num1=pile.top();
            pile.pop();
            long long int newV=num1/num2;
            pile.push(newV);
            sum+=(num1/num2);
            continue;
        }
       else if(s=="*"){
            long long int num1=pile.top();
            pile.pop();
            long long int num2=pile.top();
            pile.pop();
            long long int newV=num1*num2;
            pile.push(newV);
            sum+=(num1*num2);
            continue;
        }
        long long int num=toVal(s);
        pile.push(num);
        
    }
return pile.top();
}
 long long int main() {
    long long int n;
    in(n)
    vector<string> t;
    f(i,n){
        string s;
        in(s)
        t.push_back(s);
    }
    out(evalRPN(t));
    return 0;
//   ["2","1","+","3","*"]

}