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
ll mod=1000000007;
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
bool isPalindrome(string s){
    int n=s.size();
    int start=0,end=n-1;
    while(start<end){
        if(s[start]!=s[end]) return false;
    }
    return true;
}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
      int t=1;
      in(t);
      for(int abcd=0;abcd<t;abcd++){             
          ll ans=0;
        int n;
        in(n);
        int k;
        in(k);
        string s;in(s);
        string temp=s;
        for(int I2=0;I2<5;I2++){
            char c1='a'+I2;
            s[0]=c1;
            // out(s)
            if(s<temp && isPalindrome(s)){
                ans++;
            }
                for(int I3=0;I3<5;I3++){
                        char c2='a'+I3;
                        if(n>1){
                        s[1]=c2;
                        out(s)
                            if(s<temp && isPalindrome(s)){
                                ans++;
                            }
                        }
                        else{
                            break;
                        }
                            for(int I4=0;I4<5;I4++){
                            char c3='a'+I4;
                            if(n>2){
                                s[2]=c3;
                                    if(s<temp && isPalindrome(s)){
                                        ans++;
                                    }
                        }
                            else{
                                break;
                            }
                                   for(int I5=0;I5<5;I5++){
                                    char c4='a'+I5;
                                    if(n>3){
                                s[3]=c4;
                                    if(s<temp && isPalindrome(s)){
                                        ans++;
                                    }
                        }
                            else{
                                break;
                            }
                                        for(int I6=0;I6<5;I6++){
                                            char c5='a'+I6;
                                            if(n>4){
                                                s[4]=c5;
                                                if(s<temp && isPalindrome(s)){
                                                    ans++;
                                                }
                                            }
                                            else{
                                                break;
                                            }
                                                for(int I7=0;I7<5;I7++){
                                                    char c6='a'+I7;
                                                    if(n>5){
                                                        s[5]=c6;
                                                    if(s<temp && isPalindrome(s)){
                                                        ans++;
                                                    }
                                                    }
                                                    else{
                                                        break;
                                                    }
                                                    for(int I8=0;I8<5;I8++){
                                                        char c7='a' +I8;
                                                        if(n>6){
                                                        s[6]=c7;
                                                    if(s<temp && isPalindrome(s)){
                                                        ans++;
                                                    }
                                                    }
                                                    else{
                                                        break;
                                                    }
                                                        for(int I9=0;I9<5;I9++){
                                                            char c8='a' +I9;
                                                                if(n>7){
                                                            s[7]=c8;
                                                        if(s<temp && isPalindrome(s)){
                                                            ans++;
                                                        }
                                                        }
                                                        else{
                                                            break;
                                                        }

                                                        }

                                                    }

                                                }
                            
                                    }
                            
                                }
                            
                        }
                            
                    }
                        
                         
                                
                                    
                                        
                                        
                            
        }
        // for(int i=1;i<=n;i++){
        //     for(int j=0;j<5;j++){
        //         char c='a'+j;
        //         for(int p2=1;p2<=n;p2++){
                    
        //         }
        //     }
        // }
        
        
        
        cout<<"Case #"<<abcd+1<<": "<<ans%mod<<"\n";



   }

     
    
      
        
      

   

    
    return 0;
  

}