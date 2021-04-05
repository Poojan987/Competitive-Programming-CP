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


vector<int> adjacencyList[500000];
int visited[500000];

void dfs(int index){
    if(visited[index]==0){
        visited[index]=1;
        for(int i=0;i<adjacencyList[index].size();i++){
            if(visited[adjacencyList[index][i]]==0){
                dfs(adjacencyList[index][i]);
            }
        }
    }
}

int binarySearch(vector<ll>&prefixSum,vector<ll>&suffixSum,int l,int r,ll backElement,ll FrontElementSufix){

    if(l>r) return -1;
    int mid=(l+r)/2;
    
    if(prefixSum[mid]-backElement==suffixSum[mid]-FrontElementSufix){
        return mid;
    }
    else if(prefixSum[mid]-backElement>suffixSum[mid]-FrontElementSufix){
        return binarySearch(prefixSum,suffixSum,l,mid-1,backElement,FrontElementSufix);
    }
    else{
        return binarySearch(prefixSum,suffixSum,mid+1,r,backElement,FrontElementSufix);
    }
    return 1;
}
// int solve(vector<int>&v,)
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
      int t=1;
      in(t);
      for(int abcd=0;abcd<t;abcd++){
      int r=0,c=0;
      cin>>r>>c;

      int a[r][c];
      
      f(i,r){
          f(j,c)in(a[i][j]);
        //   out(a[i][2]);
      }
      int v[r][c][4];
    //    vector<int> v(r);
    //    vector<vector<vector<int > > >dpVector;
//U
//R
//D
//L

    // for(int )
       for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
               if(a[i][j]==1){
                   //Up
                   int up=0,right=0,down=0,left=0;
                //    vector<int>tp;
                   for(int point=i;point>=0;point--){
                       if(a[point][j]==1){
                           up++;
                       }
                       else{
                           break;
                       }
                   }
                   v[i][j][0]=up;
                   //R
                    for(int point=j;point<c;point++){
                       if(a[i][point]==1){
                           right++;
                       }
                       else{
                           break;
                       }
                   }
                   v[i][j][1]=right;
                   //D
                    for(int point=i;point<r;point++){
                       if(a[point][j]==1){
                           down++;
                       }
                       else{
                           break;
                       }
                   }
                   v[i][j][2]=down;

                   //L
                    for(int point=j;point>=0;point--){
                       if(a[i][point]==1){
                           left++;
                       }
                       else{
                           break;
                       }
                   }
                   v[i][j][3]=left;
                   
            // cout<<"dsaf"<<up<<" "<<left<<" "<<down<<" "<<right<<"\n";
               }
               else{
                   
                   v[i][j][0]=-1;
                   v[i][j][1]=-1;
                   v[i][j][2]=-1;
                   v[i][j][3]=-1;
                   
               }
               

           }
       }
ll ans=0;
       for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
               int up,right,down,left;
               up=v[i][j][0];
               right=v[i][j][1];
               down=v[i][j][2];
               left=v[i][j][3];

               if(up==-1) continue;
               else{
                   int tup=up,tright=right,tdown=down,tleft=left;

                   //UR
                   if(up>1 && right>1){
                //    if(max(up,right)/2<min(up,right)){
                    int maxi=(max(up,right));
                    int mini=min(up,right);

                    if(maxi/2>=mini){
                        ans+=mini-1;
                        ans+=(mini/2)-1;


                    }
                    else{
                        ans+=(maxi/2)-1;
                        ans+=(mini/2)-1;
                    }
                   }

            //UL
            if(up>1 && left>1){
                 int maxi=(max(up,left));
                    int mini=min(up,left);

                    if(maxi/2>=mini){
                        ans+=mini-1;
                        ans+=(mini/2)-1;


                    }
                    else{
                        ans+=(maxi/2)-1;
                        ans+=(mini/2)-1;
                    }
            }
//DOWN RIGHT
if(down>1 && right>1){
                int maxi=(max(down,right));
                    int mini=min(down,right);

                    if(maxi/2>=mini){
                        ans+=mini-1;
                        ans+=(mini/2)-1;


                    }
                    else{
                        ans+=(maxi/2)-1;
                        ans+=(mini/2)-1;
                    }
}
if(down>1 && left>1){
                 int maxi=(max(down,left));
                    int mini=min(down,left);

                    if(maxi/2>=mini){
                        ans+=mini-1;
                        ans+=(mini/2)-1;


                    }
                    else{
                        ans+=(maxi/2)-1;
                        ans+=(mini/2)-1;
                    }
}
             

 cout<<"Case #"<<abcd+1<<": "<<ans<<"\n";



   }

     
    
      
        
      

   

    
    return 0;
  

}