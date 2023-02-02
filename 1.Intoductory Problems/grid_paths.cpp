#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool visited[7][7];
int paths = 0, steps = 0;
int reserved[49];

void solved(int r, int c){
    bool hitWall = ((c>=1 && c<=5 && !visited[r][c+1] && !visited[r][c-1]) &&
                   ((r == 0 && visited[r+1][c]) || (r == 6 && visited[r-1][c]))) 
                   ||
                   ((r >= 1 && r <= 5 && !visited[r+1][c] && !visited[r-1][c]) &&
                   ((c == 0 && visited[r][c+1]) || (c == 6 && visited[r][c-1])))
                   ||
                   (r >= 1 && r <= 5 && c >= 1 && c <= 5 && visited[r+1][c]
                   && visited[r-1][c] && !visited[r][c+1] && !visited[r][c-1])
                   ||
                   (r >= 1 && r <= 5 && c >= 1 && c <= 5 && visited[r][c+1]
                   && visited[r][c-1] && !visited[r+1][c] && !visited[r-1][c]);
    if(hitWall || visited[r][c])
        return;

    if(r == 6 && c == 0){
        if(steps == 48){
            paths++;
        }
        return;
    }

    visited[r][c] = true;
    if(reserved[steps] != -1){
        switch(reserved[steps]){
            case 0:
                if(!visited[r-1][c] && r > 0){
                    steps++;
                    solved(r-1,c); //up
                    steps--;
                }
                break;
            case 1:
                if(!visited[r+1][c] && r < 6){
                    steps++;
                    solved(r+1,c); //down
                    steps--;
                }
                break;
            case 2:
                if(!visited[r][c-1] && c > 0){
                    steps++;
                    solved(r,c-1); //left
                    steps--;
                }
                break;
            case 3:
                if(!visited[r][c+1] && c < 6){
                    steps++;
                    solved(r,c+1); //right
                    steps--;
                }
                break;
        }
        visited[r][c] = false;
        return;
    }
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
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        switch(s[i]){
            case '?': reserved[i] = -1;
            break;

            case 'U': reserved[i] = 0;
            break;

            case 'D': reserved[i] = 1;
            break;

            case 'L': reserved[i] = 2;
            break;

            case 'R': reserved[i] = 3;
            break;
        }
    }
    solved(0,0);
    cout << paths << endl;
}