#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <stddef.h>
#include <stdlib.h>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <string>
#include <ctype.h>
#include <queue>
// #pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;

#define f(abcd, n) for (int abcd = 0; abcd < n; abcd++)
#define in(n) cin >> n;
#define print(n) cout << n;
#define out(n) cout << n << "\n";
vector<vector<string>> findDuplicate(vector<string>& paths) {
    vector<vector<string> > v;
    map<string,vector<string> >m;
    for(int i=0;i<paths.size();i++){
        int findSpace=paths[i].find(" ");
        int contentStart=paths[i].find("(")+1;
        int contentEnd=paths[i].find(")")-1;
        string path=paths[i].substr(0,findSpace);
        string fileName=paths[i].substr(findSpace+1,contentStart-findSpace-2);
        string content=paths[i].substr(contentStart,contentEnd-contentStart+1);
        m[content].push_back(path+'/'+fileName);

        findSpace=paths[i].find(" ",contentEnd+2);
        while(findSpace!=-1){
            int contentStart=paths[i].find("(",findSpace)+1;
            int contentEnd=paths[i].find(")",findSpace)-1;
            string fileName=paths[i].substr(findSpace+1,contentStart-findSpace-2);
            string content=paths[i].substr(contentStart,contentEnd-contentStart+1);
            m[content].push_back(path+'/'+fileName);
            findSpace=paths[i].find(" ",contentEnd+2);
        }
        


    }
    for(auto&itr1:m){
            cout<<(itr1.first)<<"\n";
            if(itr1.second.size()<=1) continue;
            vector<string > temp;

            for(auto&itr2:itr1.second){
                temp.push_back(itr2);
            }
            v.push_back(temp);
        }
    return v;
}


int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    return 0;
}