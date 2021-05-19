#include <iostream>
#include <bits/stdc++.h>
#include<set>
#include<stddef.h>
#include<stdlib.h>
#include <unordered_set>
#include<unordered_map>
#include<map>
#include<string>
#include<ctype.h>
#include <queue>
// #pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;

#define f(abcd,n) for(int abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";

void bfs(int s){

}

void subsetsUtil(vector<int>& A, vector<vector<int> >& res,
                 vector<int>& subset, int index)
{
    res.push_back(subset);
    for (int i = index; i < A.size(); i++) {
  
        // include the A[i] in subset.
        subset.push_back(A[i]);
  
        // move onto the next element.
        subsetsUtil(A, res, subset, i + 1);
  
        // exclude the A[i] from subset and triggers
        // backtracking.
        subset.pop_back();
    }
  
    return;
}

vector<vector<int> > subsets(vector<int>& A)
{
    vector<int> subset;
    vector<vector<int> > res;
  
    // keeps track of current element in vector A;
    int index = 0;
    subsetsUtil(A, res, subset, index);
  
    return res;
}


int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
  
      vector<int> array1 ;
      f(i,6){
          array1.push_back(i+1);
      }


    vector<vector<int> > res = subsets(array1);
  
    // Print result
    int k=0;
    for (int i = 0; i < res.size(); i++) {
        if(res[i].size()<=2) continue;
        out(++k);
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }


}