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
vector<string> tokenize(string s, string del = " ")
{
    int start = 0;
    int end = s.find(del);
    vector<string> vec;

    while (end != -1) {
        // cout << s.substr(start, end - start) << endl;
        vec.push_back(s.substr(start, end - start));
        start = end + del.size();
        end = s.find(del, start);
    }
    // cout << s.substr(start, end - start);
    vec.push_back(s.substr(start, end - start));
    return vec;
}
string sortSentence(string s) {
        vector<string>op=tokenize(s);
        map<int,string>m;

        for(int i=0;i<op.size();i++){
            string temp=op[i];
            temp.pop_back();
            m[(int)(op[i][op[i].size()-1]-'0')]=temp;
        }
        string finalS="";
        for(auto &itr:m){
            if(itr.first!=1)
                finalS=finalS+" "+itr.second;
            else{
                finalS+=itr.second;
            }
        }
        return finalS;
    }

int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
  string s;

}