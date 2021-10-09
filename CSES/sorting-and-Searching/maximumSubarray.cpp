#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long msum = INT32_MIN, csum = 0; 
    cin >> n;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        csum += a[i];
        if(csum > msum){
            msum = csum;
        }
        if(csum < 0){
            csum = 0;
        }
    }
    cout << msum << endl;
    return 0;
}