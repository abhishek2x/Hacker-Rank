// Cats and a Mouse
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int a = abs(z-x);
        int b = abs(z-y);

        if(a > b)
            cout << "Cat B\n";
        else if(b > a)
            cout << "Cat A\n";
        else if (a == b)
            cout << "Mouse C\n";
    }

    return 0;
}
