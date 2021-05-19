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


ll gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
   }
 bool isPossible(vector<int>& target) {
        priority_queue <int>q;
        long long int sum=0;
        for(int i=0;i<target.size();i++){
            sum+=target[i];
            q.push(target[i]);
        }
//         cout<<sum<<"sdfsdf\n";
// int it=0;
        while(true){
            
            if(q.top()==1) return true;
            int top=q.top();
            q.pop();
            ll curSum=sum-top;
            ll newElem=top-curSum;
            if(newElem<=0 ){
                return false;
            }
            q.push(newElem);
            sum-=top;
            sum+=newElem;
            // out(sum);
            // cout<<top<<" "<<newElem<<"\n";
            // if(it==10) break;
// out("hey");
        }

}
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
    int n;
    in(n) ;
    vector<int > target;
    f(i,n){
        int tp;
        in(tp)
        target.push_back(tp );
        
    }
out(isPossible(target));
  
    
    return 0;
  

}