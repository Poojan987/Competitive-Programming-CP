#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int m = 1;
    int t = 1;
    char temp = 0;
    temp = s[0];
    for (int i=1; i<s.length(); i++){
        if(s[i] == temp){
            t++;
        }
        else{
            temp = s[i];
            if(t > m){
                m = t;
            }
            t = 1;
        }
 
    }
    if (t > m){
        m = t;
    }
    cout<<m<<"\n";
}