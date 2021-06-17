#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <stddef.h>
#include <stdlib.h>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <string>
#include <ctype.h>
#include <queue>
// #pragma GCC optimize "trapv"
typedef long long long long int ll;
using namespace std;

#define f(abcd, n) for (long long int abcd = 0; abcd < n; abcd++)
#define in(n) cin >> n;
#define print(n) cout << n;
#define out(n) cout << n << "\n";
 long long int toVal(string s){
    
    long long int num=0;
        string hey="";
        long long int ind=-1;
    for(long long int i=0;i<s.size();i++){
        if(s[i]!='a'){
            ind=i;
            break;
        }
    }
        string p=s.substr(ind);
        cout<<p<<"\n";
        long long int tp=1;
        // num=ind!=-1?1:0;
    for(long long int i=0;i<p.size();i++){
        num=(num*10)+(p[i]-'a');
        tp=tp*10;
        cout<<tp<<" ";
        cout<<p[i]<<" "<<num<<' ';
    }
    return num;
}
bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        long long int num1=toVal(firstWord);
        long long int num2=toVal(secondWord);
        long long int num3=toVal(targetWord);
    cout<<"\n"<<num1<<" "<<num2<<" "<<num3;
        return (num1+num2)==num3;

}
long long int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    long long int n;
    in(n)

   
}