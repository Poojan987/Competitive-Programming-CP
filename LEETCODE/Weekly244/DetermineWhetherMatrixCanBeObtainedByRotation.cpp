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
bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    
     int r=mat.size(),c=mat[0].size();
     int arr[r][c];
     int temp[r][c];
     for(int i=0;i<r;i++){
         for(int j=0;j<c;j++){
             arr[i][j]=mat[i][j];
             temp[i][j]=mat[i][j];
         }
     }
     
     int n=r;
    
     for(int i=0;i<4;i++){
         //transpose
         int sub1=n-1,sub2=n-1;
         for(int j=n-1;j>=0;j--){
             for(int k=0;k<n;k++){
                 if(i%2==0){
                     temp[sub1-j][k]=arr[j][k];
                 }
                 else{
                     arr[sub1-j][k]=temp[j][k];
                 }
             }
         }
         //transpose
         int temp1[n][n],temp2[n][n];
         
         for(int j=0;j<n;j++){
             for(int k=0;k<n;k++){
                 if(i%2==0){
                     temp1[j][k]=temp[k][j];
                 }
                 else{
                     temp2[j][k]=arr[k][j];
                 }
             }
         }
         int f1=0,f2=0;
         if(i%2==0){
             
            for(int z=0;z<n;z++){
                for(int p=0;p<n;p++){
                    if(temp1[z][p]!=target[z][p]){
                        f1=1;
                        break;
                    }
                }
                if(f1==1) break;
            }
            if(f1==0) return true;
            for(int op=0;op<n;op++){
                for(int op2=0;op2<n;op2++){
                    temp[op][op2]=temp1[op][op2];
                }
            }

         }
         else{
             for(int z=0;z<n;z++){
                for(int p=0;p<n;p++){
                    if(temp2[z][p]!=target[z][p]){
                        f2=1;
                        break;
                    }
                }
                if(f2==1) break;
            }
            if(f2==0) return true;
            for(int op=0;op<n;op++){
                for(int op2=0;op2<n;op2++){
                    arr[op][op2]=temp2[op][op2];
                }
            }
         }
         
     }
     return false;
}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // out((int)'c')
      string s;
      in(s);
      
      



}