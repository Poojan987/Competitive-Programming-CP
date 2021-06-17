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
typedef long long  int ll;
using namespace std;

#define f(abcd, n) for (long long int abcd = 0; abcd < n; abcd++)
#define in(n) cin >> n;
#define print(n) cout << n;
#define out(n) cout << n << "\n";
string maxValue(string n, int x) {
    string finalS="";
    char xC=x+'0';
    if(n[0]=='-'){
        finalS+='-';
        int f=0;
        for(int i=1;i<n.size();i++){
            if(f==0&&n[i]>xC){
                f=1;
                finalS+=xC;   
            }
            finalS+=n[i];
        }
        if(f==0){
            finalS+=xC;  
        }
    }
    else{
        int f=0;
        for(int i=0;i<n.size();i++){
            if(f==0&&n[i]<xC){
                f=1;
                finalS+=xC;   
            }
            finalS+=n[i];
        }
        if(f==0){
            finalS+=xC;  
        }
    }
    return finalS;
}
 int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    long long int n;
    in(n)

   
}