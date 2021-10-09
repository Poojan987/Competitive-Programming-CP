#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, y;
        long long ans{0};
        cin >> x >> y;
        if(x>y){
            if(x%2==0){
                ans = x*x - y + 1;
            }
            else{
                ans = (x - 1)*(x-1) + y;
            }
        }
        else{
            if(y%2==1){
                ans = y*y - x + 1;
            }
            else{
                ans = (y-1)*(y-1) + x;
            }
        }
        cout << ans << endl;
    }
}