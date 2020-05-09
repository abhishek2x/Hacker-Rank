// Crossword Puzzle
// to be analysed
#include <bits/stdc++.h>
using namespace std;

bool canPlaceRight(char b[10][10], int r, int c, int len){

    if(c+len >= 10)
        return false;
    
    for (int i = c; i <= len+c; i++){
        if(b[r][i] == '+')
            return false;
    }
    return true;
}

void placeRight(char b[10][10], int r, int c, string str){

    int ind = 0;
    for(int i = c; i <= c+str.length(); i++){
        b[r][i] = str[ind++];
    }
}

bool canPlaceBottom(char b[10][10], int r, int c, int len){

    if(c+len >= 10)
        return false;
    
    for (int i = r; i <= len+r; i++){
        if(b[i][c] == '+')
            return false;
    }
    return true;
}

void placeBottom(char b[10][10], int r, int c, string str){

    int ind = 0;
    for(int i = r; i <= r+str.length(); i++) {
        b[i][c] = str[ind++];
    }
}

void crossBoardSolver(char b[10][10], string* a, int size)
{
    if(size <0)
        return;
    else
    {
        string s = a[size];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                // for Right
                if(canPlaceRight(b, i, j, s.length()))
                {
                    cout << "cdsvds";
                    placeRight(b, i, j, s);
                    crossBoardSolver(b, a, size-1);
                }

                // for bottom
                if(canPlaceBottom(b, i, j, s.length()))
                {
                    cout << "vjhvhk";
                    placeBottom(b, i, j, s);
                    crossBoardSolver(b, a, size-1);
                }
            }
        }
    }
}

void printBoard(char b[10][10]){

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cout << b[i][j];
        }
        cout << endl;
    }
}
int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    char board[10][10];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cin >> board[i][j];
        }
    }
    
    string s;
    cin >> s;

    string a[10];

    int ind = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] != ';')
            a[ind] += s[i];
        else ind++;
    }
    printBoard(board);

    crossBoardSolver(board, a, ind);

    printBoard(board);
    return 0;
}