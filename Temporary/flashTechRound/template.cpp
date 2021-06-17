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
  
   ll t=1;
   in(t)
   while(t--){
    int n,m;
    in(n)
    in(m)

    vector<int>a(m);
    f(i,m) {
        in(a[i]);
        
    }
    
    sort(a.begin(),a.end());
    int done=0;
    int cost1=0,cost2=0;
    
priority_queue<int>q1,q2;
for(int i=0;i<m;i++){
    q1.push(a[i]);
    q2.push(-a[i]);
}
//min

    while(done!=n){
        int tp=-q2.top()    ;
        q2.pop();
        if(tp>1) q2.push(-(tp-1));
        cost1+=tp;
        done++;
    }
    done=0;
    while(done!=n){
        int tp=q1.top()    ;
        q1.pop();
        if(tp>1) q1.push((tp-1));
        cost2+=tp;
        done++;
    }
cout<<cost2<<" "<<cost1<<"\n";
   }
    
    return 0;
  

}