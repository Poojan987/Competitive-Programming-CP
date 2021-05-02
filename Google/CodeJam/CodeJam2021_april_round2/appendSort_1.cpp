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
typedef unsigned long long int ll;
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
string toString(ll val){
    string s="";
    while(val>0){
        s+='0'+val%10;
        val/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}
string toValue(string s){
 return s;      
}




int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
      int t=1;
      in(t);
      for(int abcd=0;abcd<t;abcd++){
        int n;
        in(n);
        ll a[n];
        vector<string> aString;
        f(i,n) {
            in(a[i]);
        
            aString.push_back(toString(a[i]));
        }
        ll ans=0;
      for(int i=1;i<n;i++){
          int n1=aString[i-1].size();
          int n2=aString[i].size();
          if(aString[i-1].size()<aString[i].size()|| (n1==n2&&aString[i-1]<aString[i]))
            continue;
          else{
              
              string A=aString[i-1];
              string B=aString[i];

              
              if(A.length()==B.length()){
                  ans+=1;
                  B+='0';
                  aString[i]=B;
                  
                  continue;
              }
              int f=0;
              int diff=A.length()-B.length();
              for(int z=0;z<B.length();z++){
                //   out("hey");
                //   cout<<A[z]<<" "<<B[z]<<" "<<i<<"\n";
                  if(A[z]>B[z]){
                      while (B.length()<=A.length())
                      {
                          ans++;
                          B+='0';

                      }
                      aString[i]=B;
                      f=1;
                      break;
                  }
                  else if(A[z]<B[z]){
                       while (B.length()<A.length())
                      {
                          ans++;
                          B+='0';

                      }
                      f=1;
                      aString[i]=B;
                    //   cout<<"i: "<<i<<" "<<(B);
                      break;
                  }
              }
              if(f==1) continue;

              for(int p=A.length()-1;p>=B.length();p--){
                  if(A[p]!='9'){
                      while(B.length()<p){
                          B+=A[B.length()];
                          ans++;
                      }
                      ans++;
                      B+=A[B.length()]+1;
                         while (B.length()<A.length())
                      {
                          ans++;
                          B+='0';

                      }
                      f=1;
                      aString[i]=B;
                      break;
                  }


                  }
                  if(f==1){
                      continue;
                  }

                   while (B.length()<=A.length())
                      {
                          
                          ans++;
                          B+='0';

                      }
                      aString[i]=B;
                  }



              }
              

// for(int i=0;i<aString.size();i++){
//     cout<<aString[i]<<" ";
// }
out("\n");
              

          
      
      


 cout<<"Case #"<<abcd+1<<": "<<ans<<"\n";



   }

     
    
      
        
      

   

    
    return 0;
  

}