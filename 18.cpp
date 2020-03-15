// 11 test cases not passed out of 31
#include <bits/stdc++.h>
using namespace std;

int main(){
    long int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    if((x2 > x1) && (v2 > v1))
    {
        cout << "NO";
    }
    else if((x2 < x1) && (v2 < v1))
    {
        cout << "NO";
    }
    else{
        long int a = x1+v1;
        long int b = x2+v2;

            
            if( ((a%b) == 0) || ((b%a) == 0) )
                cout << "YES";
            else 
                cout << "NO";
    }

    return 0;
}
