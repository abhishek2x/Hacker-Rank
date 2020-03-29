// Modified Kaprekar Numbers

#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, q;
    cin >> p;
    cin >> q;

    int flag = 0;
    
    for (long long int i = p; i <= q; i++)
    {
        long long int num = i;
        long long int d = 1;
        long long int m = num;
        while(num > 0)
        {
            d *= 10;
            num /= 10;
        }

        long long int sqrt = m*m;

        long long int l, r;

            r = sqrt%d;
            l = sqrt/((2*d) - d);

            if((l+r) == i)
            {
                cout << i << " ";
                flag++;
            }
    }

    if(flag == 0)
    cout << "INVALID RANGE";

    return 0;
}

