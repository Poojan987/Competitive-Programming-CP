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

vector<string>super;
void permute(string a, int l, int r)
{
    // Base case
    if (l == r&& checkValid(a))
        super.push_back(a);
        // super.insert(a);
        // cout<<a<<endl;
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
 
            // Swapping done
            swap(a[l], a[i]);
 
            // Recursion called
            permute(a, l+1, r);
 
            //backtrack
            swap(a[l], a[i]);
        }
    }
}
bool checkValid(string &s){
    int c1=0,c2=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') c1++;
        else if(s[i]==')') c1--;
        if(c1<0) return false;
    }
    if(c1==0) return true;
    return false;
}
vector<string> generateParenthesis(int n) {
    // int n=2*n;
    string s="";
    string zero="";
    for(int i=0;i<n;i++){
        s+="(";
        s+=")";
        
    }
    sort(s.begin(),s.end());
    // permute(s,0,2*n-1);

    vector<string>ans;
    do {  
        if(checkValid(s)){
            ans.push_back(s);
        }
    } while(next_permutation(s.begin(), s.end()));  


    
    
    return ans;


    
    

}


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
   ll t=1;
//    in(t)
   while(t--){
       

   }
    
    return 0;
  

}