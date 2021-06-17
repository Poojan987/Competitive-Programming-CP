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

class NumMatrix {
public:
    vector<vector <int > >v;
    NumMatrix(vector<vector<int> >& matrix) {
        
        for(int i=0;i<matrix.size();i++){
            int sum=0;
            vector<int> temp;
            for(int j=0;j<matrix[0].size();j++){
                if(i==0){
                    temp.push_back(matrix[i][j]);
                }
                else{
                    temp.push_back(v[i-1][j]+matrix[i][j]);
                }

            }
            v.push_back(temp);
        }
    //  for(int i=0;i<matrix.size();i++){
    //      for(int j=0;j<matrix.size();j++){
    //          cout<<v[i][j]<<" ";
    //      }
    //      out("\n");
    //  }   
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=col1;i<=col2;i++){
            if(row1==0){
                sum+=v[row2][i];
            }
            else{
                sum+=(v[row2][i]-v[row1-1][i]);
            }
        }
        return sum;
    }
};


int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
  
     
    vector<vector<int> >matrix= { {3, 0, 1, 4, 2}, {5, 6, 3, 2, 1}, {1, 2, 0, 1, 5}, {4, 1, 0, 1, 7}, {1, 0, 3, 0, 5} };
    NumMatrix* obj = new NumMatrix(matrix);
    
    // NumMatrix* obj = new NumMatrix(numMatrix);

    int param_1 = obj->sumRegion(2, 1, 4, 3);
    int param_2 = obj->sumRegion(1, 1, 2, 2);
    int param_3 = obj->sumRegion(1, 2, 2, 4);
    cout<<param_1<<" "<<param_2<<" "<<param_3<<"\n";
 


}