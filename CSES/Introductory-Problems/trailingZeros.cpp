#include <iostream>
using namespace std;

// we just need to count the number of times 5 occurs from 0 to n
// for eg. 135 has 33 5's and hence 33 trailing zeros.
// 5 occurs 27 times 
// 25 occurs 5 times
// 125 occurs 1 times

int main(){
    int n;
    cin >> n;
    int ans{0};
    for(int i=5; n/i >= 1; i*=5){
        // cout << n/i << endl;
        ans+=(n/i);
    }
    cout << ans << endl;
    return 0;
}