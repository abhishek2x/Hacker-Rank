
// Maximum Element of Stack
#include <bits/stdc++.h>
using namespace std;

int getLargest(stack<int> s){
    long long int lar = s.top();	
    while (!s.empty()) 
	{ 
		int p=s.top(); 
        if(p >= lar){
            lar = p;
        }
		s.pop(); 
	} 
    return lar;
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);

    long int N;
    cin >> N;
    stack <int> s; 
    for (long int i = 0; i < N; i++)
    {
        int q;
        cin >> q;

        if(q == 1){
            long long int num;
            cin >> num;
            s.push(num);

        }

        if(q == 2){
            s.pop();
        }

        if(q == 3){
            cout << getLargest(s) << endl;
        }

    }
    return 0;
}