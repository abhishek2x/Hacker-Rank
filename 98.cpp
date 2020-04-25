// Equal Stacks
// All test cases not passed
#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    long int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int* a1 = new int[n1];
    int* a2 = new int[n2];
    int* a3 = new int[n3];

    for (long int i = 0; i < n1; i++){
        cin >> a1[i];
    }
    for (long int i = 0; i < n2; i++){
        cin >> a2[i];
    }
    for (long int i = 0; i < n3; i++){
        cin >> a3[i];
    }
    
    long int sum1=0, sum2=0, sum3=0;
    
    for (long int i = 0; i < n1; i++){
        sum1 += a1[i];
    }
    for (long int i = 0; i < n2; i++){
        sum2 += a2[i];
    }
    for (long int i = 0; i < n3; i++){
        sum3 += a3[i];
    }

    long int t1=0, t2=0, t3=0;

    while(1){

        if(t1 == n1 || t2 == n2 || t3 == n2){
            cout << "0" ;
            break;
        }

        if(sum1 == sum2 && sum3 == sum1){
            cout << sum2;
            break;
        }

        if(sum1 >= sum2 && sum1 >= sum3){
            sum1 -= a1[t1++];
        }
        if(sum2 >= sum1 && sum2 >= sum3){
            sum2 -= a2[t2++];
        }
        if(sum3 >= sum2 && sum3 >= sum1){
            sum3 -= a3[t3++];
        }
    }
    return 0;
}