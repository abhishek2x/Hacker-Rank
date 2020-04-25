// Maximum Element of Stack
#include <bits/stdc++.h>
using namespace std;


int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    long int N;
    cin >> N;
    stack <int> s; 
    stack <int> maxS; 

    // maxS.push(0);

    for (long int i = 0; i < N; i++)
    {
        int q;
        cin >> q;

        if(q == 1){

            long long int num;
            cin >> num;
            s.push(num);

            int max = num;

            // Max Manipulations
            if(!maxS.empty() && max < maxS.top()){
                max = maxS.top();
            }
            
            // Mandatory steps
            s.push(num);
            maxS.push(max);
        }

        if(q == 2){
            s.pop();
            maxS.pop(); //Important step
            continue;
        }

        if(q == 3){
            cout << maxS.top() << endl;
            continue;
        }
    }
    return 0;
}