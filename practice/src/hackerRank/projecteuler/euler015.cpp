#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int K = 501;
    long long int A[501][501] = {0};
    int i , j;
    int T,N,M;
    for(i = 0; i < K; i++){
        A[i][1] = 1;
    }
    for(i = 0; i < K; i++ ){
        A[1][i] = 1;
       // cout << A[1][i];
    }
    for(i=2; i < K ; i++){
        for(j = 2; j < K; j++){
            A[i][j] = A[i-1][j] + A[i][j-1];
            if(i < 5 && j < 3){
            cout << i << " " << j << " : " << A[i][j] << "\n";
            }

        }
    }
    cin >> T;
    while(T--){
        cin >> N >> M;
        cout << A[N][M] << "\n";
    }
    return 0;
}
