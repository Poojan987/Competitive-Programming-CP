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
//#pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;
#define f(abcd,n) for(int abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";


int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
   
   int t;
   in(t);
   for(int abcd=0;abcd<t;abcd++){
       string str;
       in(str);
       int k1=str.find("KICK");
       int s1=str.find("START");
    //    cout<<k1<<" "<<s1;

       int c=0;

       vector<int>vk,vs;

       if(k1!=-1&&s1!=-1){
            vk.push_back(k1);
            vs.push_back(s1);

            int kt=k1+1,st=s1+1;
            while(kt!=-1&&kt!=str.length()){
                kt=str.find("KICK",kt);
                if(kt!=-1 && kt!=str.length()){
                    vk.push_back(kt);
                }
                else{
                    break;
                }
                kt++;

            }
            while(st!=-1&&st!=str.length()){
                st=str.find("START",st);
                if(st!=-1 && st!=str.length()){
                    vs.push_back(st);
                }
                else{
                    break;
                }
                st+=1;
            }
    int s=0;
            for(int i=0;i<vk.size();i++){

                if(s<vs.size()&&vk[i]<vs[s]){
                    c+=vs.size()-s;
                }
                else{
                    while(s<vs.size()){
                        if(vk[i]<vs[s]){
                            c+=vs.size()-s;
                            break;
                        }
                        s++;
                    }

                }
            }

           


       }

 cout<<"Case #"<<abcd+1<<": "<<c<<"\n";



   }
    
    return 0;
  

}