#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n, temp, val=0;
    vector<long long int> v;
    cin >> n;
    cin >> temp;
    v.push_back(temp);
    for(int i=1; i<n; i++){
        cin >> temp;
        v.push_back(temp);
        if (v[i-1] > v[i]){
            val += (v[i-1] - v[i]);
            v[i] = v[i-1];
        }
    }
    cout << val << "\n";
}