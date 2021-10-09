#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    if (n == 1){
        cout << "1\n";
        return 0;
    }
    if(n < 4){
        cout << "NO SOLUTION\n";
        return 0; 
    }
    for(int i = 1; i< n+1; i++){
        if(i%2 == 0){
            cout << i << " ";
        }
    }
    for(int i = 1; i< n+1; i++){
        if(i%2 == 1){
            cout << i << " ";
        }
    }
}