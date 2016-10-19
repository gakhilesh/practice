#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int chain(int i , long long int *A,int max){

    if((i < max) && (A[i]!= 0)){
        return A[i];
    }
    if( i%2 == 0 ){
        if(i < max){
            A[i] = 1 + chain(i/2 , A,max);
            return A[i];
        }else{
             return 1 + chain(i/2, A,max);
        }


    }else{
        if(i < max){
            A[i] = 1 + chain(3*i + 1 , A,max);
            return A[i];
        }else{
            return 1 + chain(3*i + 1 , A,max);
        }

    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int A[1000000-990] = {0} ;
    int max = 1000000;
    long long int max_value,ans,temp;
    int T,N;
    A[1] = 1;
    A[2] = 2;
    int i;
    for(i = 1; i < 113383; i++){
        A[i] = chain(i,A,max);
    }
    cin >> T;
    while(T--){
        cin >> N;
        max_value = 1;
        ans = 1;
        for(i = 1; i <= N; i++){
            temp = chain(i,A,max);
            if(max_value <= temp){
                max_value = temp;
                ans = i;
            }
        }
        cout << ans <<"\n";
    }

    return 0;
}
