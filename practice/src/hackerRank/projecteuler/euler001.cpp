#include<iostream>
using namespace std;
int main()
    {
    long long int T,N,r;
    long long int sum,s3,s5,s15;
    cin >> T;
    while(T--){
        sum = 0;
        cin >> N;
        N--;
        r = N / 3;
        s3 = 3 * (((r)*(r+1))/2);
         r = N / 5;
        s5 = 5 * (((r)*(r+1))/2);
         r = N / 15;
        s15 = 15 * (((r)*(r+1))/2);
        sum = s3 + s5 - s15;
        cout << sum << endl;
        
    }
    return 0;
}
