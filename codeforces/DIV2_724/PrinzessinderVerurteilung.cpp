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


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
   ll t;
   in(t)
    while(t--){
        int n;
        in(n)
        string s;
        in(s);
        vector<int>v(26,0);

        for(int i=0;i<n;i++){
            v[s[i]-'a']=1;
        }
        int f1=0;
        for(int i=0;i<26;i++){
            if(v[i]==0){
                f1=1;
                
                out((char)(i+'a'));
                break;
            }
        }
        if(f1==1) continue;
        vector<string>vs(26,"");
        for(int i=0;i<26;i++){
            vs[i]+=(i+'a');
        }
        int tp=2;
        string hey="aa";
        while(s.find(hey)!=-1){
            string tp=hey;
            int r=hey.size();
            // char a='a';
            if(hey[r-1]=='z'){
                hey[r-1]='a';
                int f3=0;
                for(int i=r-2;i>=0;i--){
                    if(hey[i]=='z'){
                        hey[i]='a';
                    }
                    else{

                        hey[i]=(char)(hey[i]+1);
                        f3=1;
                        break;
                    }
                }
                if(f3==0){
                    hey='a'+hey;
                }
                
            }
            else{
                hey[r-1]=(char)(hey[r-1]+1);
            }
            // out(hey);

        }
        out(hey);
    
    }
   
   
    
    return 0;
  

}