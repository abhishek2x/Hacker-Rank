// Fair Rations
// 11/22 test cases failed :(



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int noOfOdds = 0;
    for (int i = 0; i < N; i++)
    {
        if(arr[i]%2 != 0)
        noOfOdds++;
    }

    if(noOfOdds%2 != 0 || N == 1)
    cout << "NO";
    else
    {
        if(noOfOdds == N)
        cout << noOfOdds;
        else
        cout << noOfOdds*2;
    }
    
    return 0;
    
}