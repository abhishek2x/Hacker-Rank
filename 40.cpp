// Cut the sticks
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    int types = a[0];
    int size = 1;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != types){
            size++;
            types = a[i];
        }
    }
    // std :: cout << "---" << size << "\n";
    int count = 0;
    int c = 0;
    cout << n << endl;
    for (int i = 0; i < size-1; i++)
    {
        int min;
        for (int j = 0; j < n; j++)
        {
            if(a[j] > 0)
            {
                min = a[j];
                break;
            }
        }
        // std :: cout << "----" << min << "---\n";
        for (int p = 0; p < n; p++)
        {
            if(a[p] > 0)
            {
                a[p] -= min;
                if(a[p] != 0)
                count++;
            }
        }
        // for (int o = 0; o < n; o++)
        // {
        //     cout << a[o] << ", ";
        // }
        // cout << "\n\n";
        
        std :: cout << count << endl;
        count = 0;
    }
    
    return 0;
}