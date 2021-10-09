#include <bits/stdc++.h>
using namespace std;

// We just need to make sure that the chars occur in pairs and only one char should occur odd times
// Then we just need to print it.

int main() {
    string s;
    cin >> s;
    vector<int> a(26);
    for(auto i : s){
        a[i - 'A']++;
    } 
    int flag = 0;
    for(int i = 0; i < 26; i++){
        flag += (a[i] % 2);
    } 
    if(flag > 1){
        cout << "NO SOLUTION";
        return 0;
    }
    string ans;
    for (int i = 0; i < 26; i++){
        // adding half of all the chars expect for the once which appeared odd times
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++){
                ans.push_back(i + 'A');
            } 
        }
    }
    for (int i = 0; i < 26; i++){
        // adding all odd chars
        if(a[i]%2){
            for(int j = 0; j < a[i]; j++) {
                ans.push_back(i + 'A');
            }
        }
    }
    for (int i = 25; i >= 0; i--){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++){
                ans.push_back(i + 'A');
            } 
        }
    }
    cout << ans << endl;
    return 0;
}