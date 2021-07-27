



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
        
        
        int firOneInd=-1;
        for(int i=0;i<n;i++){
            if(arr[i]!='0'){
                firOneInd=i;
                break;
            }
            
        }
        if(firOneInd==-1) return vector<int>{0,1};
        
        string first="";
        for(int i=firOneInd;i<n;i++){
            first+=arr[i];
            int k=i+1;
            string second="",third="";
            while(k<n &&arr[k]=='0'){
                k++;
            }
            
            int z=0;
            int cnt=0;
            
            while(k<n ){
                cout<<z<<" "<<k<<"\n ";
                if(first[z]==arr[k]){
                    cnt++;
                    z++;k++;
                }
                else break;
            }
            
            if(cnt==first.size()){
                int a1=z-1,a2=k-1;
                z=0;
                
                while(k<n&&arr[k]=='0'){
                    k++;
                }
                cnt=0;
                while(k<n&&first.size()!=third.size()){
                       if(first[z]==arr[k]){
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