#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,N,carry,temp;
    cin >> N;

    int A[10][19] = {0};

    for(i=0; i <=9;i++ ){
        A[i][0] = i;
    }

    for( i = 2; i <= 9; i++){
        for(j = 1; j < N; j++ ){
            carry = 0;
            for(k=0; k <= j; k++){
                temp = A[i][k]*i + carry;
                A[i][k] = temp % 10;
                carry = temp/10;
            }
        }

    }

    for(i = 1 ; i < 10; i++){
        if(A[i][N-1]!= 0){
        for(j=N-1; j >=0; j--){
            cout << A[i][j];
        }
        cout << "\n";
        }
    }



    return 0;
}
