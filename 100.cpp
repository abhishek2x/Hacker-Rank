// Simple Text Editor

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);
     
    string str = "";
    long int T;
    cin >> T;
    
    // stack to store previous state
    stack <string> undo;
    for (long int  w = 0; w < T; w++){
        
        int n;  cin >> n;

        if(n == 1)   {
            string w; cin >> w;
            undo.push(str);
            // Work 
            str = str + w;
        }

        if(n == 2)  {
            int k; cin >> k;
            undo.push(str);
            // Work
            str = str.substr(0, str.length()-k);
        }
        if(n == 3)
        {
            int ind; cin >> ind;
            cout << str[ind-1];
        }

        if(n == 4){
            str = undo.top(); 
            undo.pop();
            // cout << "----" << str << " ------";
        }
    }
    return 0;
}