#include <bits/stdc++.h>
using namespace std;
// Using DFS 
// Declaring vars as global so we don't need to pass it in function ;)
int n;
set<string> all;


void printgray(string s){
    if(!(all.find(s) == all.end())){
        return;
    }
    all.insert(s);
    for(int i=0; i<n ;i++){
        if(s[i] == '1'){
            s[i] = '0';
        }
        else{
            s[i] = '1';
        }
        printgray(s);
        if(s[i] == '1'){
            s[i] = '0';
        }
        else{
            s[i] = '1';
        }
    }
    cout << s << endl;
}

int main(){

    cin >> n;
    string s;
    for(int i=0; i<n; i++){
        s.push_back('0');
    }
    // cout << s;
    // all.insert(s);
    printgray(s);


    return 0;
}