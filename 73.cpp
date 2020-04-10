// Intro to Tutorial Challenges

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int V, n;
    cin >> V >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ind;
    for (int i = 0; i < V; i++){
        if(a[i] == V){
            ind = i;
            break;
        }
    }
    
    cout << ind;
    return 0;
    
}