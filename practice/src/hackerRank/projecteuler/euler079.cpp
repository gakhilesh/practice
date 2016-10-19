#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int k = 126 - 33 + 1;
    int map[k] = {0};
    int T,i,j,len= 0;
    cin >> T ;
    string input[T];
    for(i = 0; i < T; i++){
        cin >> input[i];
    }

    for(i = 0; i < T; i++){
        for(j = 0; j < 3; j++)
        map[input[i][j]-33]= 1;
    }
    for(i = 0; i < k; i++){
        if(map[i])
            len++;
    }
    cout << len << "\n";
    cout << "SMTH WRONG";
    return 0;
}
