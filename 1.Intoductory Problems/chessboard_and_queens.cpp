#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 8;
string chessboard[8];
bool rightdiag[(2*(N-1))], leftdiag[(2*(N-1))], column[N];
ll numberofways = 0; 

void putNext(int r){
    if(r == N){
        numberofways++;
        return;
    }
    for(int c = 0; c < N; c++){
        if(column[c] == 0 && rightdiag[r+c] == 0 && leftdiag[r-c+N-1] == 0&&chessboard[r][c] == '.'){
            column[c] = rightdiag[r+c] = leftdiag[r-c+N-1] = true;
            putNext(r+1);
            column[c] = rightdiag[r+c] = leftdiag[r-c+N-1] = false;
        }
    }
}
int main() {
    for(int  i = 0; i < N; i++){
        cin >> chessboard[i];
    }
    putNext(0);
    cout << numberofways << "\n";
}