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
typedef long long  int ll;
using namespace std;

#define f(abcd,n) for(long long int abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";

// Travelling Salesman Problem

string reconstruct(string a,string b){
    long long int n1=a.size(),n2=b.size();
    for(long long int i=max(1ll,n1-n2);i<n1;i++){
        bool tp=true;
        for(long long int j=i;j<n1;j++){
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
string toString(long long int num){
    string val="";
    while(num>0){
        val+=(num%10)-'0';
        num/=10;
    }

    reverse(val.begin(),val.end());
    return val;
}
string TSP(long long int mask,long long int pos,long long int parent,vector<string>& words,long long int allDone,map<pair<long long int,long long int>,string>&dpType){
    
    if(mask==allDone){
        return words[pos];
    }
    if(dpType[make_pair(parent,mask)].size()>0){
        return dpType[make_pair(parent,mask)];
    }
    string finalS="";
    for(long long int word=0;word<words.size();word++){
        if(!(mask&(1<<word))){
            string fromTsp=TSP(mask|(1<<word),word,parent,words,allDone,dpType);
            string hey=reconstruct(words[word],fromTsp);
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
    dpType[make_pair(parent,mask)]=finalS;
    return finalS;
}

string shortestSuperstring(vector<string>& words) {
    // allDone=1<<words.size()-1;
    
    string ans="";
    
    for(long long int i=0;i<words.size();i++){
        map<pair<long long int,long long int>,string>dpType;    
        string cur=TSP(1<<i,i,1<<i,words,(1<<words.size())-1,dpType);
        
        if(ans.size()==0){
            ans=cur;
        }
        else if(cur.size()!=0&&ans.size()>cur.size()){
            ans=cur;
        }
    }
    // ans=TSP(0,0,words,(1<<words.size())-1,dpType);
    return ans;
}

 int main() {
    // bzzfferklujni zpgtzolmocuzanqwr ustfecrfuqvhpaznjaxt cuzanqwrwdslbzzffe ehorslkpzpavzpgtzolm xtxcsozsmaohilo xapyixboynrakicimqe ohiloxapyixboynra ozsmaohiloxapyixboy fuqvhpaznjaxtxcs mocuzanqwrwdslbzzf paznjaxtxcsozsmaohil
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // catg ctaagt gcta ttca atgcatc
    //    gctaagttcatgcatc
    //    gctaagttcatgcatcatg
    //    gctaagttcatgcatc
    //alex loves leetcode

    out(reconstruct("gcta","ctaagt"));
                  // gctactaagt
                  
    long long int tp=1<<0;
    out(tp);
    long long int n;
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