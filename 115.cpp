// The TIme in Words

#include <bits/stdc++.h>
using namespace std;

const string EMPTY = "";

const string X[] = { EMPTY, "one ", "two ", "three ", "four ", "five ",
				"six ", "seven ", "eight ", "nine ", "ten ", "eleven ",
				"twelve ", "thirteen ", "fourteen ", "fifteen ",
				"sixteen ", "seventeen ", "eighteen ", "nineteen " };

const string Y[] = { EMPTY, EMPTY, "twenty ", "thirty ", "forty ", "fifty ",
				"sixty ", "seventy ", "eighty ", "ninety " };


int main(){
    int h;
    int m;
    cin >> h >> m;

    if(m==1 && h ==1)
    cout << "one minute past one";
    else
    {
            
        if(m<=30){
            if(m == 0){
                cout << X[h] << "o' clock";
            }
            else
            {
                if(m == 15){
                    cout <<"quarter past " << X[h];
                }
                if(m == 30){
                    cout <<"half past " << X[h];
                }
                else if(m <= 19 && m != 15){
                    cout << X[m] << "minutes past " << X[h];
                }
                else if(m > 19){
                    int a = m%10;
                    int b = m/10;
                    cout << Y[b] << X[a] << "minutes past " << X[h];
                }
            }
        }
    
        else if(m>30){
                m= 60-m;
                if(m == 15){
                    cout <<"quarter to " << X[h+1];
                }
                else if(m <= 19 && m != 15){
                    cout << X[m] << "minutes to " << X[h+1];
                }
                else{
                    int a = m%10; 
                    int b = m/10;
                    cout << Y[b] << X[a] << "minutes to " << X[h+1];
                }
        }

    }
    return 0;
}