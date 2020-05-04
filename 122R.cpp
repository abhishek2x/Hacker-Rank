
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T;  cin >> T;

    for (int o = 0; o < T; o++)
    {
        string str;
        cin >> str;
        int len = str.length();	 
        
        int res = 0; 
        for (int i=0, j=len-1; i < j; i++, j--)	{	 
            if (str[i] != str[j]) 
                res += 1;		 
        }
        
        cout << res << endl;
    }
    
	return 0; 
} 
