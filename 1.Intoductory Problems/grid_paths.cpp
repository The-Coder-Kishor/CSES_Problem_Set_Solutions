#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool visited[7][7];
int paths = 0, steps = 0;

void solved(int r, int c){
    if (visited[r][c])
        return;
    if(r == 6 && c == 0){
        if(steps == 48){
            paths++;
        }
        return;
    }
    visited[r][c] = true;
    if(!visited[r+1][c] && r < 6){
        steps++;
        solved(r+1,c); //down
        steps--;
    }
    if(!visited[r-1][c] && r > 0){
        steps++;
        solved(r-1,c); //up
        steps--;
    }
    if(!visited[r][c-1] && c > 0){
        steps++;
        solved(r,c-1); //left
        steps--;
    }
    if(!visited[r][c+1] && c < 6){
        steps++;
        solved(r,c+1); //right
        steps--;
    }
    visited[r][c] = false;
}
int main() {
    solved(0,0);
    cout << paths << endl;
}