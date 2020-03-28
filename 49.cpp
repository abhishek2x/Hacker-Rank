// ACM ICPC Team

#include <bits/stdc++.h>
using namespace std;

int countCommon(string s1, string s2, int n)
{
    int cnt = 0;

    for (int i = 0; i < n; i++){
        if(s1.at(i) == '1' ||  s2.at(i) == '1')
            cnt++;
    }
    return cnt;
}

int main(){
    int n, m;
    cin >> n >> m;

    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; 
    }
    
    int c1 = 0, l = 0, final = 0;
    for (int i = 0; i < n; i++)
    {
        
        string str = a[i];
        for (int j = i+1; j < n; j++)
        {
            c1 = countCommon(str, a[j], m);

            // cout  << "---" << c1 << "---" ;
            if(c1 >= l)
            {
                l = c1;
            }
        }
        // cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        string str = a[i];
        for (int j = i+1; j < n; j++)
        {
            c1 = countCommon(str, a[j], m);
            if(c1 == l)
                final++;
        }
    }

    cout << l << endl; 
    cout << final;
    return 0;
}
