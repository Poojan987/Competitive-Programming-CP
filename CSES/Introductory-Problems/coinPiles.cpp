#include <iostream>
using namespace std;
// You have to figure out differernt cases
// Time complexity O(1)

int main(){
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a == b){
            if(a%3==0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
        else{
            int diff = a > b ? a - b : b - a;
            if(diff > min(a, b)){
                cout << "NO\n";
            }
            else{
                if((min(a, b) - diff)%3 == 0){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                }
            }
        }
    }
    return 0;
}