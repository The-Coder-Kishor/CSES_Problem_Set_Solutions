#include <bits/stdc++.h>
using namespace std;

int first[100];
int value[100];
int coins[] = {4,1,3
};
int main() {
    int n;
    cin >> n;
    value[0] = 0;
    for(int x = 1; x <= n; x++){
        value[x] = INT_MAX;
        for(auto c: coins){
            if(x-c >= 0 && value[x-c] + 1 < value[x]){
                value[x] = value[x-c] + 1;
                first[x] = c;
            }
        }
    }
    while(n > 0){
        cout << first[n] << " ";
        n -= first[n];
    }
}