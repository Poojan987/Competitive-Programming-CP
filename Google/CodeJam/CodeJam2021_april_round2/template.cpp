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

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
      int t=1;
      in(t);
      for(int abcd=0;abcd<t;abcd++){
        int n;
        in(n);
        ll a[n];
        f(i,n) in(a[i]);
        int digits[n];
        int firstDigit[n];
        int lastDigit[n];
        for(int i=0;i<n;i++){
            ll temp=a[i];
            int dig=0;
            lastDigit[i]=a[i]%10;
            while(temp>0){
                dig++;
                if(temp/10==0){
                    firstDigit[i]=temp;
                }
                temp/=10;

            }
            digits[i]=dig;
        }
        ll ans=0;
        // if(a[0]<a[1]){
        //     if(firstDigit[0]>firstDigit[1]){
        //         ans+=(digits[1]-digits[0]);
        //         digits[0]+=digits[1]-digits[0];

        //     }
        //     else{
        //         ans+=(digits[1]-digits[0]+1);
        //         digits[0]+=digits[1]-digits[0]+1;
        //     }
           
        // }
        for(int i=1;i<n;i++){
            if(a[i]<=a[i-1]){
                if(firstDigit[i]>firstDigit[i-1]){
                ans+=(digits[i-1]-digits[i]);
                
                int temp=digits[i-1]-digits[i];
                ll power=pow(10,temp);

                a[i]*=power;

                digits[i]+=digits[i-1]-digits[i];
                continue;

            }

            ll temp1=a[i],temp2=a[i-1];
                vector<int> digits1,digits2;
                while(temp1>0){
                    digits1.push_back(temp1%10);
                    temp1/=10;

                }
                while(temp2>0){
                    digits2.push_back(temp2%10);
                    temp2/=10;

                }
                int f=0;
            for(int z=0;z<digits2.size();z++){
                if(digits2[z]!=digits1[z]){
                    
                }
            }

             if(digits[i-1]!=digits[i] && firstDigit[i]==firstDigit[i-1] ){

                ll temp1=a[i],temp2=a[i-1];
                vector<int> digits1,digits2;
                while(temp1>0){
                    digits1.push_back(temp1%10);
                    temp1/=10;

                }
                while(temp2>0){
                    digits2.push_back(temp2%10);
                    temp2/=10;

                }




                ans+=(digits[i-1]-digits[i]);
                int temp=digits[i-1]-digits[i];
                ll power=pow(10,temp);

                a[i]*=power;
                a[i]+=lastDigit[i-1]+1;

                digits[i]+=digits[i-1]-digits[i];
                // a[i]+=10*(digits[i-1]-digits[i])+lastDigit[i-1]+1;
            }
            else{
                ans+=(digits[i-1]-digits[i]+1);
                
                int temp=digits[i-1]-digits[i]+1;
                ll power=pow(10,temp);

                a[i]*=power;
                


                digits[i]+=digits[i-1]-digits[i]+1;
                // a[i]+=10*digits[i-1]-digits[i]+1;
            }
            }
        }
      


 cout<<"Case #"<<abcd+1<<": "<<abs(ans)<<"\n";



   }

     
    
      
        
      

   

    
    return 0;
  

}