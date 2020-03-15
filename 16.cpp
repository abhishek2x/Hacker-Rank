// 9/15
#include <bits/stdc++.h>
using namespace std;

int main(){
    int date;
    cin >> date;
    // if(date > 1918){
        if(date%4 == 0){
        cout << "12.09." << date;
        } else{
            cout << "13.09." << date;
        }
    // }

    // if(date <= 1918){
    //     if(date%4 == 0){
    //         cout << "30.10." << date;
    //     } else{
    //         cout << "31.10." << date;
    //     }
    // }

    return 0;
}