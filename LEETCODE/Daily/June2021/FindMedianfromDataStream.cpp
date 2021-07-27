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
typedef long long int ll;
using namespace std;

#define f(abcd, n) for (ll abcd = 0; abcd < n; abcd++)
#define in(n) cin >> n;
#define print(n) cout << n;
#define out(n) cout << n << "\n";
//Optimised version Accepted
priority_queue<double>maxi,mini;
MedianFinder() {
    priority_queue<double>maxi1,mini2;
    maxi=maxi1;mini=mini2;
}
    
    void addNum(int num) {
        if(maxi.size()==0||num<maxi.top()){
            maxi.push(1.0*num);
        }
        else{
            mini.push(-1.0*num);
        }
        if(maxi.size()>mini.size()+1){
            mini.push(-maxi.top());maxi.pop();
        }
        else if(mini.size()>maxi.size()+1){
            maxi.push(-mini.top());mini.pop();
        }
        cout<<"hello";
        
        
    }
        
    
    double findMedian() {
       if(maxi.size()==mini.size()){
           return (maxi.top()+(-mini.top()))/2;
       }
       if(maxi.size()>mini.size()) return maxi.top();
        return -mini.top();
    }

//brute force 
multiset<double>seti;
multiset<double>::iterator itCur = seti.begin();
multiset<double>::iterator itPrev = seti.begin();
MedianFinder() {
        multiset<double>seti1;
        seti=seti1;
    multiset<double>::iterator itCur1 = seti.begin();
    multiset<double>::iterator itPrev1 = seti.begin();
    itCur=itCur1;
    itPrev=itPrev1;
    }
    
    void addNum(int num) {
        seti.insert(1.0*num);
        // seti.insert(1.0*num);
        // if(seti.size()==1){
        //     itCur=seti.begin();
        //     itPrev=seti.begin();
        // }
        // else{
        //     itPrev=itCur;
        //     itCur++;
        
    }
        // cout<<*itPrev<<" "<<*itCur<<"\n";
    
    double findMedian() {
        int n=seti.size();
        auto itr=seti.begin();
        advance(itr,n/2);
        // auto itr2=itr+1;
        if(seti.size()%2==0){
            return ((*itr+(*(--itr)))/2);
        }
        else{
            return (*itr);
        }
    }
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    in(t);
    while (t--)
    {
    }
}
