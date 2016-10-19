#include<iostream>
#include<math.h>
using namespace std ;
int main(){
    int i,j,k, N;
    long long int prod[3010] = {0} ;
    int T,temp = 0;
    for(i = 3 ; i < 1505 ; i++)
        {
        for(j= i+1 ; j < 1505 - i; j++ ){
            temp = (i*i + j*j);
            k = sqrt(temp);
            if(temp == k*k)
                {
                if(prod[i+j+k] < i*j*k)
                    {
                    prod[i+j+k] = i*j*k;
                }
            }
        }
    }
    for(i =0; i< 3010 ; i++)
    cout << i << " : " <<prod[i] << endl;

    cout << prod[1000] ;
    return 0;
}
