#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n ;
    long long a[n], b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        a[i]--;
        b[a[i]] = i;
    }
    int count = 1;
    for(int i=1; i<n; i++){
        if(b[i]<b[i-1]){
            count++;
        }
    }
    // if()
    cout << count << endl;
    return 0;
}