#include<iostream>
using namespace std;
int main(){

    int temp[3002][2]= {0};
    int sum[1001];
    sum[0] = sum[1] = 1;
    temp[0][0] = temp[0][1] = 1;
    int i,j,carry,N,T;
    int t,flag = 0;

    for(i=2; i< 1001 ; i++){
        carry = 0;
        sum[i] = 0 ;
        flag = 1 - flag;
        for(j=0 ; j < 3*i; j++){
        t = temp[j][flag] * i + carry ;
        temp[j][1-flag] = t%10;

        carry = t/10;
        }
        for(j = 0; j < i*3 ; j++){
            sum[i] = sum[i] + temp[j][1-flag];
        }
    }

    cin >> T;
    while(T--){
    cin >> N;
    cout << sum[N] << endl;
    }
    return 0;
}
