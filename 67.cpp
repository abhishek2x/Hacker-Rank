// Strong Password
// All 89 Test Cases Passed

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    char arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int a, b, e, d;
    a = 0;
    b = 0;
    e = 0;
    d = 0;
    for (int i = 0; i < n; i++)
    {
        char c = arr[i];
        int ch = c;
        // cout << ch << ", ";
        if(ch >= 65 && ch <= 90)
        {
            a = 1;
        }
        if(ch >= 97 && ch <= 122)
        {
            b = 1;
        }
        if(ch >= 48 && ch <= 57)
        {
            e = 1;
        }
        if(c == '!' || c == '@' || c == '#' 
        || c == '$' || c == '-' || c == '+'
        || c == '%' || c == '^' || c == '('
        || c == ')' || c == '*' || c == '&')
        {
            d = 1;
        }
    }

    int l = 0;
    
    // Conditions which aren't satisfied
    if(a == 0 ){
        l++;
        // cout << "a";
    }
    if (b == 0){
        l++;
        // cout << "b";
    }
    if (e == 0){
        l++;
        // cout << "c";
    }
    if (d == 0){
        l++;
        // cout << "d";
    }

    int less = 0;
    if(n <= 6)
        less = 6 - n;

    if(l >= less)
    cout << l;
    else cout << less;
    return 0;
}

