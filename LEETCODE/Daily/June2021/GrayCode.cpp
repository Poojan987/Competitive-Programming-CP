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

string bin(int n){
    string s="";
    if(n==0) return "0";
    while(n){
        s=((char)(n&1))+s;
        n/=10;
    }
    return s;
}

vector<int> grayCode(int n) {
    vector<int> ans;
    int maxi=(int) (pow(2,n))-1;
    for(int i=0;i<n;i++){
        string b=bin(i);
        string tp="";
        for(int j=0;j<b.size();j++){
            if(j==0)tp[j]=b[j];
            else{
                tp[j]=(b[j]-'0')^(b[j-1]-'0');
            }
        }
        int val=1;
        int num=0;
        for(int j=tp.size();j>=0;j--){
            num+=(tp[j]-'0')*val;
            val*=2;
        }
        ans.push_back(num);
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