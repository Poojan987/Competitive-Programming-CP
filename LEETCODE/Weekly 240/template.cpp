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
int maximumPopulation(vector<vector<int> >& logs) {
    int mini=INT_MAX;
        for(int i=0;i<logs.size();i++){
            mini=min(mini,logs[i][0]);
        }   
        int finalYear;
        int maxi=0;
        for(int j=1950;j<=2050;j++){
            int year=j;
            int c=0;
            for(int i=0;i<logs.size();i++)
            {
                if(j>=logs[i][0] && j<=logs[i][1]-1){
                    c++;
                }
             }
             if(c>0 && maxi==0){
                 maxi=c;
                 finalYear=year;
             }
             else{
                 if(maxi<c){
                     maxi=c;
                     finalYear=year;
                 }
             }
        }
        return finalYear;

    }
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  int n;
  in(n);

  vector<vector<int> >logs;
    f(i,n){
        vector <int>tp;
        int birth,dead;
        in(birth);in(dead);
        tp.push_back(birth);
        tp.push_back(dead);
        logs.push_back(tp);
    }
   out( maximumPopulation(logs));
  

  
    
    return 0;
  

}