#include<iostream>
using namespace std;
int main(){
    long long int N,T;
    cin >> T;
    while(T--){
        cin >> N;
        cout << (N*(3*N*N*N  + 2*N*N -3*N -2)/6)/2 << endl;
    }
    return 0;

}
