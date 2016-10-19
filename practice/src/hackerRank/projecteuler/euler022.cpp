#include<iostream>
using namespace std;
int main(){
    struct {
        char name[12];
        int worth;
    } s[5300];

    int N,Q;
    cin >> N;
    int j, i = 0;
    while(N--){
        cin >> s[i].name ;
        s[i].worth = 0;
        j = 0;
        for(;;)
        {
        if(s[i].name[j] == '\0')
            break;
        s[i].worth += s[i].name[j] - 65;
        j++;
        }

        i++;
    }
    cin >>Q;
    for(i = 0; i < Q; i++){
           cin >> s[N+i].name ;
    }
    for(i= 0; i < N ; i++){
     cout << s[i].name << endl ;
    }

    return 0;
}
