#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int MAX = 45;
int A[10][10] = {0};
void findReplace(int index , bool isRow)
{
    int sum = 0, i, k;
    if(isRow)
    {
        for(i = 1; i < 10; i++)
        {
            if(A[index][i] == 0)
            {
                k = i;
            }
            sum += A[index][i];
        }
        A[index][k] = MAX - sum;
        A[index][0]--;
        A[0][k]--;
    }
    else
    {
        for(i = 1; i < 10; i++)
        {
            if(A[i][index] == 0)
            {
                k = i;
            }
            sum += A[i][index];
        }
        A[k][index] = MAX - sum;
        A[0][index]--;
        A[k][0]--;
    }
    A[0][0]--;

}

void minBox()
{

    int i , j, k, l, sum , n, x, y;
    for(i = 1; i < 10; i = i+3)
    {
        for(j = 1; j < 10; j = j +3)
        {   sum = 0;
            n = 0;
            for(r = i ; k < i+3; k++)
            {
                for(c = j; l < j +3; j++)
                {
                    if(A[r][c]==0)
                    {
                        n++;
                        x = r;
                        y = c;
                    }
                    sum = sum + A[r][c];
                }
            }
            if(n == 1){
            A[x][y] = MAX - sum;
            }
        }

    }



}

void printSU()
{
    for(int i = 1; i < 10; i++)
    {
        for(int j = 1; j< 10 ; j++)
        {
            cout << A[i][j];
        }
        cout << "\n";
    }
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int i , j;
    long t;
    for(i = 1; i < 10; i++)
    {
        cin >> t;
        for(j = 9; j > 0 ; j--)
        {
            A[i][j] = t%10;
            t = t / 10;
        }
    }

    for(i = 1; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
        {
            if(A[i][j] == 0)
            {
                A[0][j]++;
                A[i][0]++;
                A[0][0]++;
            }
        }
    }
    //printSU();
    while(A[0][0] > 0)
    {

        for(i = 1; i < 10; i++)
        {
            if(A[i][0] == 1)
            {
                findReplace(i,true);
            }
            if(A[0][i]==1)
            {
                findReplace(i,false);
            }
        }

        minBox();

    }
    printSU();
    return 0;
}
