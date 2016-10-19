#include<iostream>
using namespace std;
int main(){
int i,j,k;
long long int A[50];
for(i=1; i<= 40; i++)
{
    A[i] = i;
}
for(i=2; i< 21; i++)
{
    for(j=2; i*j < 41; j++ ){
    A[i*j] = A[i*j]/A[i];
    }
}
for(i=2; i< 41; i++)
A[i] = A[i] * A[i-1];

int T,N;
cin >> T;
while(T--)
{
    cin >> N;
    cout << A[N] << endl;
}
return 0;
}
