#include <bits/stdc++.h>
using namespace std;
// We will store the input in the set data structure.
// Set insert have log(n) worst case time complexity.
// Set size takes constant time.
// log1 + log2 + log3... = log(n!) = O(nlog(n))
int main(){
    int n, temp;
    cin >> n;
    set<int> s;
    for(int i=0; i<n; i++){
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size() << endl;
    return 0;
}