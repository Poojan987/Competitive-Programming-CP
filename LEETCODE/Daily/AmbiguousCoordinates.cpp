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



vector<string> decimalSep(string s){
    vector<string> hey;
    int n=s.size();
    if(s[0]=='0' && s.size()>1){
        // hey.push_back(s);
    }
    else{
        hey.push_back(s);
    }
    // string dot=".";
    int index=1;
    for(int i=0;i<n-1;i++){
        string temp=s;
        temp.insert(index,1,'.');
        // out(temp);
        index++;
        if(temp[0]=='0'){
            if(temp.size()>1){
                // out(temp);
                if(temp[1]!='.') {

                    continue;
                }
                

            }
        }
        int index=temp.find('.');
        if(temp.size()>1 && index!=-1 && temp[temp.size()-1]=='0') continue;

        hey.push_back(temp);
    }
    return hey;
}
vector<string> ambiguousCoordinates(string s) {
        s.erase(0,1);
        s.pop_back();
        
        
        
        int index=0;
        int n=s.size();
        vector<string > ans;


      
            
            string s1="",s2="";
            for(int i=0;i<n-1;i++){
                vector <string>v1,v2;
                s1+=s[i];
                s2="";
                for(int j=i+1;j<n;j++){
                    s2+=s[j];
                }
                v1=decimalSep(s1);
                v2=decimalSep(s2);
                for(int k=0;k<v1.size();k++){
                    string s1=v1[k];
                    for(int z=0;z<v2.size();z++){
                        string s2=v2[z];
                        
                        if(s1.size()==0||s2.size()==0) continue;
                        string add='('+s1+", "+s2+')';
                        ans.push_back(add);

                    }
                }
            }
        
        return ans;
    }


int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
  string s;
  in(s);
  vector<string > amb=ambiguousCoordinates(s);
//    vector<string > amb=decimalSep(s);
  f(i,amb.size()){
      cout<<amb[i]<<" \n";
  }
//   out("\n");
  
   

return 0;
}