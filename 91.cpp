// Fraudulent Activity Notifications
// TLE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, d;
    cin >> n >> d;

    int* exp = NULL;
    int* med = NULL;

    exp = new int[n];
    med = new int[d];

    for (long long int i = 0; i < n; i++){
        cin >> exp[i];
    }

    long long int ind = 0;
    int notification = 0;
    for (long long int i = 0; i < n-d; i++)
    {
        ind = 0;
        for (long long int j = i; j < d+i; j++){
            med[ind++] = exp[j];
        }
        sort(med, med+d);

        long long int m = med[d/2];
        if(exp[i+d] >= (2*m))
            notification++;
    }
    
    cout << notification;
}
