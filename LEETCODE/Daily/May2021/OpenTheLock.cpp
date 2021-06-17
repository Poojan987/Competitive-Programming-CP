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
vector<string> stringChange(string s,unordered_set<string>&seti){
    vector<string> v;

    for(int i=0;i<4;i++){
        string tp1=s;
        string tp2=s;
        if(tp1[i]=='0'){
            tp1[i]='9';
        }
        else{
            tp1[i]=tp1[i]-1;
        }
        if(tp2[i]=='9'){
            tp2[i]='0';
        }
        else{
            tp2[i]=tp2[i]+1;
        }
        if(!seti.count(tp1))
            v.push_back(tp1);
        if(!seti.count(tp2))
            v.push_back(tp2);
    }
    return v;
}
string pad(int num){
    string s="";
    while(num>0){
        s+=(num%10)+'0';
        num/=10;
    }
    reverse(s.begin(),s.end());
    while(s.size()<4){
        s='0'+s;
    }
    return s;

}
int openLock(vector<string>& deadends, string target) {
    map<string,vector<string> > m;
    map<string,bool> visitedMap;
    unordered_set<string>s;
    int n=deadends.size();
    for(int i=0;i<deadends.size();i++){
        s.insert(deadends[i]);
    }
    if(s.count("0000")) return -1;
    for(int i=0;i<10000;i++){
        string cur=pad(i);
        vector<string> adjacent=stringChange(cur,s);
        m[cur]=adjacent;
    }
    queue<pair<string,int> >q;
    q.push(make_pair("0000",0));
    int c=0;
    string tp2="";
    while(q.size()>0){
        string cur=q.front().first;
        int curNum=q.front().second;
        q.pop();
        c++;
        visitedMap[cur]=true;
        for(int i=0;i<m[cur].size();i++){
            if(!visitedMap[m[cur][i]]){
                if(m[cur][i]==target){
                    return curNum+1;
                }
                q.push(make_pair(m[cur][i],curNum+1));
                tp2=m[cur][i];
                
            }
        }
        
    }

return -1;
}
// int bfs()
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    int t=1;
    in(t);
    while(t--){
      
    }

     
    
      
        
      

   

    
    return 0;
  

}