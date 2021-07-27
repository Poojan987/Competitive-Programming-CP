



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
 vector<int> threeEqualParts(vector<int>& arr) {
        int n=arr.size()   ;
        vector<char>ar(n);
        for(int i=0;i<arr.size();i++){
            ar[i]=arr[i]+'0';
        }   
        int firOneInd=-1;
        for(int i=0;i<n;i++){
            if(ar[i]!='0'){
                firOneInd=i;
                break;
            }
            
        }
        if(firOneInd==-1) return vector<int>{0,1};
        
        string first="";
        for(int i=firOneInd;i<n;i++){
            first+=ar[i];
            int k=i+1;
            string second="",third="";
            while(k<n &&ar[k]=='0'){
                k++;
            }
            
            int z=0;
            int cnt=0;
            
            while(k<n ){
                cout<<z<<" "<<k<<"\n ";
                if(first[z]==ar[k]){
                    cnt++;
                    z++;k++;
                }
                else break;
            }
            
            if(cnt==first.size()){
                int a1=z-1,a2=k-1;
                z=0;
                
                while(k<n&&ar[k]=='0'){
                    k++;
                }
                cnt=0;
                while(k<n&&first.size()!=third.size()){
                       if(first[z]==ar[k]){
                           z++;k++;cnt++;
                       }
                        else{
                            break;
                        }
                }
                if(cnt==first.size()) return vector<int> {a1,a2};
            }
            
        }
        return vector<int>{-1,-1};
    }



     vector<int> threeEqualParts(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
        int one=0;
        int leadZero=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=1){
                leadZero++;
            }
            else break;
        }
        for(int i=0;i<n;i++){
            if(arr[i]==1)cnt++;
            
        }
        if(one==0){
            return vector<int>{0,2};
        }
        if(one%3!=0)return vector<int>{-1,-1};
        
        int trailOne=0,trailZ=0,bI=n-1;
        
        while(trailOne!=one/3){
            if(arr[bI]==1){
                // trailOne++;
                break;
            }
            else{
                trailZ++;
            }
            bI--;
            
        }
        int i=0;
        while(arr[i]==0){
            i++;
        }
        int firstPart=0;
        for(;i<n;i++){
            if(arr[i]==1){
                firstPart++;
            }
            if(firstPart==one/3) break;
        }
        int tp1=0;
        for(;i<n;i++){
            if(arr[i]==0){
                tp1++;
            }
            if(tp1==trailZ)break;
            if(arr[i]==1)return vector<int>{-1,-1};
        }
        int a1=i+leadZero;
        ///part 2
        
        
        while(arr[i]==0){
            i++;
        }
        int secondPart=0;
        for(;i<n;i++){
            if(arr[i]==1){
                secondPart++;
            }
            if(secondPart==one/3) break;
        }
        tp1=0;
        for(;i<n;i++){
            if(arr[i]==0){
                tp1++;
            }
            if(tp1==trailZ)break;
            if(arr[i]==1)return vector<int>{-1,-1};
        }
        int a2=i+2;
        if(a2>=n) return vector<int>{-1,-1};
       return vector<int>{a1,a2};
        
    }
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

  int t;
  in(t);
  while(t--){
     int n,a,b;
     cin>>n>>a>>b;

     string s;
     in(s)
    ll sum=0;
    sum+=(a*n);

    if(b>=0){
        sum+=(b*n);
    }
    else{
        int z=1;
        char c=s[0];
        // while(s.size()){
        //     char c=s[0];
        //     // int mini
        //     for(int i=0;i<s.size();i++){

        //     }
        // }
        for(int i=1;i<n;i++){
            if(s[i]!=c){
                c=s[i];
                z++;
            }
        }
        sum+=(((z/2)+1)*(b));
        // cout<<"hello"<<z<<"\n";
    }
    out(sum);



} 

    
    return 0;
  

}