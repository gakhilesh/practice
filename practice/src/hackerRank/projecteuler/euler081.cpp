#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long min(long x , long y){
    return (x>y)?y:x;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, i, j ;
    cin >> N;
    long A[N][N];
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }
    for(i = 1; i < N; i++){
        A[i][0] += A[i-1][0];
        A[0][i] += A[0][i-1];
    }
    for(i=1 ; i < N; i++){
        for(j = 1; j < N; j++){
            A[i][j] = A[i][j] + min(A[i-1][j],A[i][j-1]);
        }
    }
    cout << A[N-1][N-1];


    return 0;
}

/*
In the 5×5 matrix below, the minimal path sum from the top left to the bottom right, by only moving to the right and down, is indicated in bold and is equal to 2427.

⎛⎝⎜⎜⎜⎜⎜⎜131201630537805673968036997322343427464975241039654221213718150111956331⎞⎠⎟⎟⎟⎟⎟⎟
Find the minimum path sum in given matrix.

Input Format
Each testcase begins with an integer N followed by N lines containing the description of the matrix.

Constraints
1≤N≤1000
1≤values of elements in matrix≤109

Output Format
A single line for each testcase containing the value of the minimal path sum.

Sample Input

5
131 673 234 103 18
201 96 342 965 150
630 803 746 422 111
537 699 497 121 956
805 732 524 37 331
Sample Output

2427

*/
