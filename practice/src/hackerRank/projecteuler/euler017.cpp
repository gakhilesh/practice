#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
string once[] = { "","One", "Two", "Three", "Four" ,"Five", "Six","Seven","Eigth","Nine","Ten",
                  "Eleven","Twelve" , "Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen","Twenty"
                };

string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty","Fifty","Sixty","Seventy","Eighty","Ninety","Hundred"};
string pod[] = {"Hundred", "Thousand", "Million","Billion"};
int ten = 10;
int h = 100;
int th = 1000;
int m = 1000000;
long long int b = 1000000000;


void hundred(int );
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    long long int N , Test;
    long long int temp;
    cin >> Test;
    while(Test--){
    cin >> N;
    if(N == 0){
    cout << "Zero\n";
    }else{
        temp = N/b;
    if(temp){
    hundred(temp);
    cout <<pod[3] << " ";
    }
    N = N%b;
    temp = N/m;
    if(temp){
    hundred(temp);
    cout << pod[2] << " ";
    }
    N = N%m;

    temp = N/th;
    if(temp){
    hundred(temp);
    cout << pod[1] << " ";
    }

    N = N%th;
    hundred(N);
    cout << "\n";
    }

    }




    return 0;
}
void hundred(int N)
{
    int t;
    if(N/h)
    {
        t = N/100;
        cout << once[t] << " " << pod[0] << " ";
        N = N%h;
    }
    if(N%h)
    {

        t = N%h;
        if(t <= 20)
        {
            cout << once[t] << " ";
        }
        else
        {
            cout << tens[t/ten] << " ";
            if(t%ten){
                cout << once[t%10] << " ";
            }
        }
    }
}

