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

#define f(abcd,n) for(ll abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";



int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    // from collections import Counter
  

      ll t=1;
      in(t);
    for(ll abcd=0;abcd<t;abcd++){             
          
        // def main():
        int n,m;
        cin>>n>>m;
        vector<string>a(n);
        vector<string>b(n-1);
        vector<string>c(m,"");
        vector<string>d(m,"");
        for(int i=0;i<n;i++){
            in(a[i])
        }
        for(int i=0;i<n-1;i++){
            in(b[i])
        }
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                c[j]+=a[i][j];
            }
        }
        for(int j=0;j<m;j++){
            for(int i=0;i<n-1;i++){
                d[j]+=b[i][j];
            }
        }



        string ans="";
        // out("sadiofjdsijfjisd");
        // for(int i=0;i<m;i++){
        //     cout<<c[i]<<" ";
        // }
        // for(int i=0;i<m;i++){
        //     cout<<d[i]<<" ";
        // }
        // out("sadiofjdsijfjisd");
        
        for(int i=0;i<m;i++){
            sort(c[i].begin(),c[i].end());
            sort(d[i].begin(),d[i].end());
            int flag=0;
            for(int j=0;j<d[i].size();j++){
                if(d[i][j]!=c[i][j]){
                    ans+=c[i][j];
                    flag=1;
                    break;
                }
                
            }
            if(flag==0){
                    ans+=c[i][c[i].size()-1];
                }
        }
        // out("hello");
        out(ans);
       
   }

     
    
      
        
      

   

    
    return 0;
  

}