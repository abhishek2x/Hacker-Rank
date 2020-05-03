// Queue using Two Stacks
// TLE
#include <bits/stdc++.h>
using namespace std;

struct Queue{
    stack <int> s1 ,s2;
    // s2 here is just like a helper

    void enque(long long int x){
        // move s1 element to s2
        while(s1.empty() == false){
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        // shift element back to s1
        while(s2.empty() == false){
            s1.push(s2.top());
            s2.pop();
        }
    }

    void deque(){

        // int k = s1.top(); 
        s1.pop(); 
    }

    void show(){
        // Front

        if(s1.empty() == false)
        cout << s1.top() << endl;

    // RARE
        // if(s1.size() > 1){
        //     while(s1.empty() == false){
        //         s2.push(s1.top());
        //         s1.pop();
        //     }

        //     // Rare
        //     if(s2.empty() == false)
        //     cout << s2.top() << endl;
        // }
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