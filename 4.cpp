#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string original[n];
    for (int i = 0; i < n; i++){
        cin >> original[i];
    }
    
    int q;
    cin >> q;
    string query[q];
    for (int i = 0; i < q; i++){
        cin >> query[i];
    }

    int result[q];
    for (int k = 0; k < q; k++) {
        result[k] = 0;
    }
    
    for (int i = 0; i < q; i++)
    {
        string str = query[i];
        for (int j = 0; j < n; j++)
        {
            if(str.compare(original[j]) == 0)
            result[i]++;
        }
    }
    
    for (int i = 0; i < q; i++)
    {
        cout << result[i] << endl;
    }
    
    return 0;
}
