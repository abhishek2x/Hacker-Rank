// Designer PDF Viewer
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[26];
    for (int i = 0; i < 26; i++)
    {
        cin >> a[i];
    }

    string str;
    cin >> str;

    int lar = 0, largest = 0;

    for (int i = 0; i < str.length(); i++)
    {
        int ch = str.at(i);
        ch -= 97;
        // cout << ch << "---\n";
        
        for (int j = 0; j < 26; j++)
        {
            if( ch == j)
            {
                lar = a[j];
                if(lar > largest)
                    largest = lar;
                break;
            }
        }
    }
    // cout << largest;
    cout << largest*str.length();

    return 0;
}