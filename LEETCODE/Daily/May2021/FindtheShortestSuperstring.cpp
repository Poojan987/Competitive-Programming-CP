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

// Travelling Salesman Problem

string reconstruct(string a,string b){
    int n1=a.size(),n2=b.size();
    for(int i=max(1,n1-n2);i<n1;i++){
        bool tp=true;
        for(int j=i;j<n1;j++){
            if(a[j]!=b[j-i]){
                tp=false;
                break;
            }
        }
        if(tp){
            
            return a.substr(0,i)+b;
        }

    }
    return a+b;
}

string TSP(int mask,int pos,vector<string>& words,int allDone,map<int,string>&dpType){
    
    if(mask==allDone){
        return words[pos];
    }
    if(dpType[mask].size()>0){
        return dpType[mask];
    }
    string finalS="";
    for(int word=0;word<words.size();word++){
        if(!(mask&(1<<word))){
            string fromTsp=TSP(mask|(1<<word),word,words,allDone,dpType);
            string hey=reconstruct(words[pos],fromTsp);
            if(finalS.size()==0){
                finalS=hey;
            }
            else{
                if(finalS.size()>hey.size()){
                    finalS=hey;
                }
            }
        }
    }
    dpType[mask]=finalS;
    return finalS;
}

string shortestSuperstring(vector<string>& words) {
    // allDone=1<<words.size()-1;
    
    string ans="";
    map<int,string>dpType;
    // for(int i=0;i<words.size();i++){
        
    //     string cur=TSP(1<<i,i,words,(1<<words.size())-1,dpType);
    //     out(cur)
    //     if(ans.size()==0){
    //         ans=cur;
    //     }
    //     else if(cur.size()!=0&&ans.size()>cur.size()){
    //         ans=cur;
    //     }
    // }
    ans=TSP(1<<i,i,words,(1<<words.size())-1,dpType);
    return ans;
}

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // catg ctaagt gcta ttca atgcatc
    //    gctaagttcatgcatc
    //    gctaagttcatgcatcatg
    out(reconstruct("gcta","ctaagt"));
                  // gctactaagt
                  
    int tp=1<<0;
    out(tp);
    int n;
    in(n)
    vector<string> v;
    f(i,n) {
        string s;
        in(s)
        v.push_back(s);
    };
    out(shortestSuperstring(v));
    
    return 0;
  

}