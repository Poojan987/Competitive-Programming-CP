#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i: a){
        cin >> i;
    }
    map<int, int> s;
    int capacity = 1, maxx = INT16_MIN, count = 0;
    for(int i=0; i<n; i++){
        if(s.find(a[i]) != s.end()){
            if(s[a[i]] + 1 <= capacity){
                s[a[i]]+=1;
            }else{
                count++;
                s[a[i]]++;
            }
        }else if(a[i] > maxx){
            count++;
            s[a[i]] = 1;
        }else{
            s[a[i]]++;
        }
    }
    cout << count << endl;
    return 0;
}