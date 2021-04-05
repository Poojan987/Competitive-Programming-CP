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


int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
   }

int * SieveOfEratosthenes(int n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        
        if (prime[p] == true) 
        { 
            
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    
    int* ALLPRIMES=new int[n],count=0;
    for (int p=2; p<=n; p++) {
       if (prime[p]) {
          ALLPRIMES[count]=p;
        count++;
       }
    }
       return ALLPRIMES;
    
} 
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
} 
bool sortByVal(const pair<int, double> &a, 
               const pair<int, double> &b) 
{ 
    return (a.second < b.second); 
} 



vector<int> adjacencyList[100000];
int visited[100000];

int dfs(int ind,int depth){
    int cnt=depth;
    if(visited[ind]!=1){
        visited[ind]=1;
        for(auto itr:adjacencyList[ind]){
            if(visited[itr]!=1){
                cnt=max(cnt,dfs(itr,depth+1));
                // out(depth);
            }
        }
    }
    return cnt;
}

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

    int r,c;
    cin>>r>>c;

    string s[r];
    for(int i=0;i<r;i++){
        in(s[i]);
    }

    vector<pair<int,int>>v;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(s[i][j]=='W') v.push_back(make_pair(i,j));
        }
    }

    for(int i=0;i<v.size();i++){
        int column=v[i].second,row=v[i].first;


        if(column!=0){
             if(s[row][column-1]=='S'){
                    cout<<"NO"<<"\n";
                    return 0;

                }
                 else{
                     if(s[row][column-1]=='.')
                        s[row][column-1]='D';
                }
        }
         if(row!=0){
               if(s[row-1][column]=='S'){
                    cout<<"NO"<<"\n";
                    return 0;

                }
                 else{
                     if(  s[row-1][column]=='.')
                         s[row-1][column]='D';
                }
         }
         if(column!=c-1){
              if(s[row][column+1]=='S'){
                    cout<<"NO"<<"\n";
                    return 0;

                }
                 else{
                     if(s[row][column+1]=='.')
                    s[row][column+1]='D';
                }
         }
         if(row!=r-1){
              if(s[row+1][column]=='S'){
                    cout<<"NO"<<"\n";
                    return 0;

                }
                 else{
                     if(s[row+1][column]=='.')
                    s[row+1][column]='D';
                }
         }
    }
        out("YES");
         for(int i=0;i<r;i++){
             cout<<s[i]<<"\n";
         }
        // if(column==0 ){
        //     if(row==0){
               
        //         if(s[row][column+1]=='S'){
        //             cout<<"NO"<<"\n";
        //             continue;

        //         }
        //         else{
        //             s[row][column+1]='D';
        //         }
        //         if(s[row+1][column]=='S'){
        //             cout<<"NO"<<"\n";
        //             continue;

        //         }
        //         else{
        //             s[row+1][column]=='D';
        //         }
        //     }
        //     else{
        //         if(s[row][column+1]=='S'){
        //             cout<<"NO"<<"\n";
        //             continue;

        //         }
        //         else{
        //             s[row][column+1]='D';
        //         }
        //         if(row!=r-1 ){
        //         if( s[row+1][column]=='S'){
        //             cout<<"NO"<<"\n";
        //             continue;

        //         }
        //         else{
        //             s[row+1][column]=='D';
        //         }
        //         }
        //         if(s[row-1][column]=='S'){
        //             cout<<"NO"<<"\n";
        //             continue;

        //         }
        //         else{
        //             s[row-1][column]=='D';
        //         }
        //     }
            
        // }
        // else if(row==0){

            
        //     if(column==0){
               
        //         if(s[row][column+1]=='S'){
        //             cout<<"NO"<<"\n";
        //             continue;

        //         }
        //         else{
        //             s[row][column+1]='D';
        //         }
        //         if(s[row+1][column]=='S'){
        //             cout<<"NO"<<"\n";
        //             continue;

        //         }
        //         else{
        //             s[row+1][column]=='D';
        //         }
        //     }
        //     else{
        //         if(s[row][column+1]=='S'){
        //             cout<<"NO"<<"\n";
        //             continue;

        //         }
        //         else{
        //             s[row][column+1]='D';
        //         }
        //         if(s[row+1][column]=='S'){
        //             cout<<"NO"<<"\n";
        //             continue;

        //         }
        //         else{
        //             s[row+1][column]=='D';
        //         }
        //         if(s[row-1][column]=='S'){
        //             cout<<"NO"<<"\n";
        //             continue;

        //         }
        //         else{
        //             s[row-1][column]=='D';
        //         }
        //     }

        // }
    

   


    
    return 0;
  

}