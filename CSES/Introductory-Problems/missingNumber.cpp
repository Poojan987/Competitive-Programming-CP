#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector <int> a;
    int temp;
    for(int i=0; i<n-1; i++){
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    for(int i=1; i<=n; i++){
        if(a[i-1] != i){
            temp = i;
            break;
        }
    }
    cout<<temp<<"\n";
}