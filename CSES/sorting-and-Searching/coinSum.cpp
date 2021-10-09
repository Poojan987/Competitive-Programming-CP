#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(auto &i: a){
        cin >> i;
    }
     sort(a.begin(), a.end());
    long long curr = 1, summ = 0, i = 0;
    bool okk = true;
    while(true){
        if(i == n || curr < a[i]){
            okk = false;
            break;
        }
        else{
            curr += a[i];
        }
        i++;
    }
    cout << curr << endl;
    return 0;
}