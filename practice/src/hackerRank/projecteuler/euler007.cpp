#include<iostream>
using namespace std;
long long int  L = 1100000;
int PRIME[1000000] = {0};
int LPRIME[100000] = {0};
void primes(){
long long int i,j,k;
    for(i = 2 ; i< L / 2; i++)
        {
        if(!PRIME[i])
            {
            for(j = 2; i * j < L ; j++)
            {
                if(i * j > 1000000 )
                {
                 LPRIME[i*j - 1000000] = 1;
                }
                else{
                PRIME[i*j] = 1;
                }
            }

        }
    }
    k = 0;
    for(i=2; i< 1000000; i++){
    if(!PRIME[i]){
        PRIME[k++] = i;
        }
    }
    for(;i< 1100000; i++)
    {
    if(!LPRIME[i-1000000])
    {
        PRIME[k++] = i;
    }
    }

}
int main(){
    primes();
    int T,N;
    cin >> T;
    while(T--)
    {
    cin >> N;
    cout << PRIME[N-1] << endl;
    }
    return 0;
}
