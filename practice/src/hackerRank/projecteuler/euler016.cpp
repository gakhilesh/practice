#include<iostream>
using namespace std ;
int main()
{
    int i,j,k;
    int sum[10001] = {0};
    int temp[2][10000] = {0};
    int carry , t;
    int T, N;
    /* declerations */
    temp[0][0] = 2;
    temp[1][0] = 4;
    sum[0] = 1;
    sum[1] = 2;
    sum[2] = 4;
    int flag = 0;
    j = 3;
    for( j = 3 ; j < 10001 ; j++)
    {
        sum[j] = 0;
        carry =  0;
        for(i=0; i< j/2 ; i++)
        {
            t = temp[1-flag][i] * 2 + carry  ;
            temp[flag][i] = t %10;
            carry = t / 10;
        }
        for(i=0 ; i < j/2 ; i++){
        sum[j] = sum[j] + temp[flag][i] ;
        }
       // cout << j << " : " << sum[j] << endl;
        flag = 1 - flag;
    }

    cin >> T;
    while(T--){
    cin >> N;
    cout << sum[N] << endl;
    }
    return 0;
}
