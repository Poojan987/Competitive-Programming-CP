#include <iostream>
using namespace std;

// straight-forward code as asked in question.

int main(){
    long long int n;
    cin>>n;
    cout<<n<<" ";
    for(;n != 1; ){
        if( n % 2 == 1){
            n *= 3;
            n += 1;
            cout<<n<<" ";
            if(n==1){
                break;
            }
        }
        else{
            n /= 2;
            cout<<n<<" ";
            if(n==1){
                break;
            }
        }
    }
}