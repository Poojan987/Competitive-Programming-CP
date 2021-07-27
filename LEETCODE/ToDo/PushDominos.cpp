

// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge-2021/610/week-3-july-15th-july-21st/3821/

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
string pushDominoes(string dominoes) {
     int n=dominoes.size();
     int i=0;
     while(dominoes[i]!='R'){
         dominoes[i]='L';
         i++;
     }
     if(i==n||i==n-1) return dominoes;
        vector<int>left,right;
     for(int j=i;j<n;j++){
         if(dominoes[j]=='L')left.push_back(j);
         else if(dominoes[j]=='R')right.push_back(j);
     }
        if(!left.size()){
            for(int j=i;j<n;j++){
                dominoes[j]='R';
            }
            return dominoes;
        }
        int z1=0,z2=0;
        int movInd=i;
        while(z1<right.size()&& z2<left.size()){
            int r1=-1,r2=-1,l1=-1,l2=-1;
            if(z1<right.size()) r1=right[z1+1];
            if(z1+1<right.size()) r2=right[z1+1];
            if(z2<left.size()) l1=left[z2];
            if(z2+1<left.size()) l2=left[z2+1];
            
            if(l1==-1&&l2==-1&& r1!=-1){
                for(int j=r1;j<n;j++){
                    dominoes[j]='R';
                }
                return dominoes;
            }
            else if(r1!=-1&&r2!=-1&&l1!=-1 && l2!=-1){
                if()
            }
            if(r2>=0){
                
            }
            while(l<=r){
                if(l==r) break;
                dominoes[l]='R';
                dominoes[r]='L';
                l++;
                r--;
            }
            movInd=left[z2]+1;
            z1++;z2++;
            
        }
        return dominoes;
    }
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