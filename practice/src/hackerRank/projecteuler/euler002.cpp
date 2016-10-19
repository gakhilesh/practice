#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int Max = 40000000000000000;
    int T;
    long long int a,b,i,j,temp,N,ans;
    cin >> T;
    a = 1;
    b = 2;
    long long int A[100] ;
    A[0] = 2;
    i = 1;
    while(temp < Max){
        temp = a+b;
        a = b ;
        b = temp;
        if(temp%2 == 0){
            A[i++] = temp;
        }
    }
    while(T--){
        cin >> N;
        ans = 0;
        for(j = 0 ; j < i; j++)
        {
            if(A[j] < N){
                ans = ans + A[j];
            }else{
                break;
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}
euler002/
