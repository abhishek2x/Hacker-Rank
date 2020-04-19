// Big Sorting
// 3 test cases satisfied
#include <bits/stdc++.h>
using namespace std;

int check(string s, string r)
{
    if(s.length() < r.length())
        return 1;
    else return 0;
}

int valuez(string s1, string s2)
{
    int p=0, q=0;
    if(s1.length() == s2.length())
    {
        for (int i = 0; i < s1.length(); i++)
        {
            p += s1[i];
            q += s2[i];
            if(q > p)
                return 1;
            if(q < p)
                return 0;
        }
    }
    else 
    {
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;

    string* arr = NULL;
    arr = new string[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n, check);
    sort(arr, arr+n, valuez);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
    
}
