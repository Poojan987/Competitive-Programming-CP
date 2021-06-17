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

// 24 60
// 12:21
// 24 60
// 23:59
int toInte(string s){
    int tp=0;
    int i=0;
    for(;i<s.size();i++){
        tp=(tp*10)+(s[i]-'0');
    }
    return tp;
}
bool rev(string s,int h,int m){
    
    
    
    reverse(s.begin(),s.end());
    int Ind=0,f=0;
    string pre="",post="";
    for(int i=0;i<s.size();i++ ){
        if(s[i]=='3'||s[i]=='4'||s[i]=='6'||s[i]=='7'||s[i]=='9'){
            return false;
        }
        if(s[i]==':'){
            Ind=i;
            f=1;
            continue;
        }
        if(s[i]=='2') s[i]='5';
        else if(s[i]=='5') s[i]='2';
        if(f==0){
            pre+=s[i];
        }
        else{
            post+=s[i];
        }
    }
    int preInt=toInte(pre),postInt=toInte(post);

    return preInt<h&&postInt<m;
}
string toStr(int num){
    string str="";
    while(num){
        str+=(num%10)+'0';
        num/=10;
    }
    reverse(str.begin(),str.end());
    while(str.size()!=2){
        str='0'+str;
    }
    return str;
}
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
   ll t=1;
   in(t)
    while(t--){
        int h,m;
        cin>>h>>m;
        string time;
        in(time)
        while(!rev(time,h,m)){
            string pre="",post="";
            int f=0;
            for(int i=0;i<time.size();i++){
                if(time[i]==':') {
                    f=1;
                    continue;
                }
                if(f==0) pre+=time[i];
                else post+=time[i];

            }
            int preInt=toInte(pre);int postInt=toInte(post);
            // cout<<"prepost: "<<pre<<" "<<preInt<<" "<<post<<" "<<postInt<<"\n";
            if(preInt==h-1&&postInt==m-1){
                time="00:00";
                break;
                
            }
            else if(postInt==m-1){
                preInt++;
                postInt=0;
            }
            else{
                postInt++;
            }
            time=toStr(preInt)+":"+toStr(postInt);
            // cout<<"hey"<<time<<"\n";
        }

        out(time);



    }
    
    return 0;
  

}