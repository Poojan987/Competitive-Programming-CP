#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n, count = 0, curr = 0, endd, j=1;
    cin >> n;
    pair<ll, ll> temp;
    vector<pair<ll, ll>> movies(n);
    for(int i = 0; i<n; i++){
        cin >> temp.second >> temp.first;
        movies[i] = temp;
    }
    sort(movies.begin(), movies.end());
    endd = movies[n-1].first;
    curr = movies[0].first;
    count++;
    while(curr < endd){
        if(j == n){
            break;
        }
        if(movies[j].second >= curr){
            curr = movies[j].first;
            count++;
        }
        j++;
    }
    cout << count << endl;
    return 0;
}