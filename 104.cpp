// Queue using Two Stacks

#include <bits/stdc++.h>
using namespace std;

struct Queue{
    stack <int> s1 ,s2;
    // s2 here is just like a helper

    void enque(long long int x){
        s1.push(x);
    }

    void deque(){
        if (s2.empty() == true) { 
            while (s1.empty() == false) { 
                s2.push(s1.top()); 
                s1.pop(); 
            }
        }
        s2.pop();
    }

    void show(){
        // Front
        if (s2.empty() == true) { 
            while (s1.empty() == false) { 
                s2.push(s1.top()); 
                s1.pop(); 
            }
        }
        cout << s2.top() << endl;
    }
};

int main(){
    ios :: sync_with_stdio(false);
    cin.tie();

    Queue q;

    long int T;
    cin >> T;
    for (long int i = 0; i < T; i++)
    {
        int n;
        cin >> n;

        if(n == 1){
            long long int x;
            cin >> x;
            q.enque(x);
        }
        if(n == 2){
            q.deque();
        }
        if(n == 3){
            q.show();
        }
    }
    
    return 0;
}