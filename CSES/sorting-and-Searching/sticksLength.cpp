#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n], mid, count = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    mid = a[n/2];
    for(int i=0; i<n; i++){
        count+=abs(a[i]-mid);
    }
    cout << count << endl;

    return 0;
}