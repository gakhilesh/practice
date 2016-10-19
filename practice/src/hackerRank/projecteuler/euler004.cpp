#include<iostream>
using namespace std;
int palindrome(int N){
    int temp = 0,R = N;
    while(N){
        temp = 10*temp + N%10;
        N = N/10;
    }
    if(temp == R)return 1;
    else return 0;
}
int main()
{
int i,j,t;
int A[1000000] = {0};

for(i = 101 ; i < 999 ; i++)
{
    if(i%10 == 0) continue;
    for(j=i+1 ; j < 1000; j++){
        if(j%10 == 0) continue;
        t = i * j;
        if(t > 101100)
        {
            if(t%10 == 0) continue;
            A[t] = palindrome(t);
        }

    }
}
j = 0;
for(i=101101 ; i< 1000000; i++)
    {
        if(A[i]) A[j++] = i;
    }

int T,N;
cin >> T;
while(T--)
{
    cin >> N;
    i = 0;
    while(A[i] <= N && i < j)
    {
    i++;
    }
    cout << A[i-1] << endl;
}
return 0;

}

