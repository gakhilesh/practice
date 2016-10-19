#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int  NoOfdivisors(long long int num){
    long long int max = sqrt(num);
    long long int count = 0;
    for(int i = 1; i <= max ; i++){
        if(num%i == 0){
            count += 2;
        }
    }
    if(max * max == num){
        count--;
    }
    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, j,N= 1000,T=1;
    long long int num = 0, count ;
    //cin >> T;
    while(T--){
        //cin >> N;
        if(N == 1){
            cout << 3 << "\n";
            continue;
        }
        num = 1;
        for( i = 2; ; i++){
            num += i;
            count = NoOfdivisors(num);
            if(count > N){
                cout << num << "\n";
                break;
            }
        }
    }
    return 0;
}
