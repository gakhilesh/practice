#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int max = 1000001;
    long long int A[max] = {0};
    int i , j;
    int T,N;
    for(i = 2; i<= sqrt(max); i++){
        if(A[i] == 0){
            for(j = 2; i*j < max ; j++){
                A[i*j] = 1;
            }
        }
    }
    
    for(i = 2; i < max ; i++ ){
        if(A[i] == 0){
            A[i] = A[i-1] + i;
        }else{
            A[i] = A[i-1];
        }
    }
    
    cin >> T;
    while(T--){
        cin >> N;
        cout << A[N] << "\n";
    }
    
    return 0;
}
/*
The sum of the primes below 10 is 2+3+5+7=17.

Find the sum of all the primes not greater than given N.

Input Format 
The first line contains an integer T i.e. number of the test cases. 
The next T lines will contains an integer N.

Output Format 
Print the value corresponding to each test case in seperate line.

Constraints 
1≤T≤10^4 
1≤N≤10^6

Sample Input

2
5
10
Sample Output

10
17
*/