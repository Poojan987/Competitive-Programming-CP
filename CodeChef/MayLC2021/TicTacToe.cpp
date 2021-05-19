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
int exponentMod(int A, int B, int C)
{
    // Base cases
    if (A == 0)
        return 0;
    if (B == 0)
        return 1;
 
    // If B is even
    long y;
    if (B % 2 == 0) {
        y = exponentMod(A, B / 2, C);
        y = (y * y) % C;
    }
 
    // If B is odd
    else {
        y = A % C;
        y = (y * exponentMod(A, B - 1, C) % C) % C;
    }
 
    return (int)((y + C) % C);
}
int power(int x,  int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
ll bigMod(ll base, ll exp, ll m){

    if(exp == 0) return 1;

    if(!(exp & 1)){ //if exp is even
        ll temp= bigMod(base, exp/2, m)%m;
        return (temp*temp)%m;
    }

    else return ( (base%m)*(bigMod(base, exp-1, m))%m )%m;
}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
   
  int t;
  in(t);
  
  while(t--){
      
      string st[3];
      char num[9];

      f(i,3){
          in(st[i]);
      }
      int p=0;
      int xCount=0,yCount=0;
      int fill=0;
      f(i,3){
          
        f(j,3){
            num[p]=st[i][j];
            
            if(num[p]=='X'){
                xCount++;
                fill++;
            }
            else if(num[p]=='O'){
                yCount++;
                fill++;
            }
            p++;
        }
          
      }
    //   cout<<xCount<<" "<<yCount<<"\n";
      if((xCount-yCount)>1 || (xCount-yCount)<0 ){
          out(3);
          continue;
      }

int f1=0,f2=0;
      ////////rowx
		if((num[0]=='X' && num[0]==num[1] && num[1]==num[2]) )
        {
            f1=1;
        }
        if( (num[3]=='X' && (num[3]==num[4]) && (num[4]==num[5]) )){
            if(f1==1){
                out(3);
                continue;
            }
            f1=1;
        }
        if((num[6]=='X' &&(num[6]==num[7]) && (num[7]==num[8]))){
            if(f1==1){
                out(3);
                continue;
            }
            f1=1;
        }
        ////////Columnx
         if((num[0]=='X' && num[0]==num[3] && num[3]==num[6])  )
        {
            if(f1==1){
                out(3);
                continue;
            }
            f1=1;
        }
        if( (num[1]=='X' &&(num[1]==num[4]) && (num[4]==num[7]))){
            if(f1==1){
                out(3);
                continue;
            }
            f1=1;
        }
        if( (num[2]=='X' &&(num[2]==num[5]) && (num[5]==num[8]))){
            if(f1==1){
                out(3);
                continue;
            }
            f1=1;
        }
////////Diagonalx
         if((num[0]=='X' && num[0]==num[4] && num[4]==num[8]) )
            {
                    if(f1==1){
                    out(3);
                    continue;
                }
                    f1=1;
            }
            if( (num[2]=='X' &&(num[2]==num[4]) && (num[4]==num[6]) )){
                    if(f1==1){
                    out(3);
                    continue;
                 }
                    f1=1;
            }

    //////o
    ////////rowy
		if((num[0]=='O' && num[0]==num[1] && num[1]==num[2]) )
        {
             if(f1==1){
                out(3);
                continue;
            }
            f2=1;
        }
        if( (num[3]=='O' && (num[3]==num[4]) && (num[4]==num[5]) )){
            if(f1==1){
                out(3);
                continue;
            }
            if(f2==1){
                out(3);
                continue;
            }
            f2=1;
        }
        if((num[6]=='O' &&(num[6]==num[7]) && (num[7]==num[8]))){
            if(f1==1){
                out(3);
                continue;
            }
            if(f2==1){
                out(3);
                continue;
            }
            f2=1;
        }
        ////////ColumnY
         if((num[0]=='O' && num[0]==num[3] && num[3]==num[6])  )
        {
            if(f1==1){
                out(3);
                continue;
            }
            if(f2==1){
                out(3);
                continue;
            }
            f2=1;
        }
        if( (num[1]=='O' &&(num[1]==num[4]) && (num[4]==num[7]))){
            if(f1==1){
                out(3);
                continue;
            }
            if(f2==1){
                out(3);
                continue;
            }
            f2=1;
        }
        if( (num[2]=='O' &&(num[2]==num[5]) && (num[5]==num[8]))){
            if(f1==1){
                out(3);
                continue;
            }
            if(f2==1){
                out(3);
                continue;
            }
            f2=1;
        }
////////DiagonalY
         if((num[0]=='O' && num[0]==num[4] && num[4]==num[8]) )
            {
                    if(f1==1){
                    out(3);
                    continue;
                }
                if(f2==1){
                out(3);
                continue;
            }
                    f2=1;
            }
            if( (num[2]=='O' &&(num[2]==num[4]) && (num[4]==num[6]) )){
                    if(f1==1){
                    out(3);
                    continue;
                 }
                 if(f2==1){
                out(3);
                continue;
            }
                    f2=1;
            }

       

        if(f2==1 && f1==1){
            out(3);

        }
        else{
            if(fill==9 && f1==0 && f2==0){
                out(1);
            }
          else  if(f1==0 && f2==0){
                out(2);
            }
            else{
               
                out(1);

            }
        }
  }
    
    return 0;
  

}