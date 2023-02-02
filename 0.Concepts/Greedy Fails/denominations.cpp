#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int coins[] = {1,3,4};
bool ready[N];
int value[N];

int main() {
    int testcases;
    cin >> testcases;
    while(testcases--){
        int n;
        cin >> n;
        value[0] = 0;
        if(!ready[N]) {
            for(int x = 1; x <= n; x++){
                value[x] = INT_MAX;
                for(int i = 0; i < 3; i++){
                    if(x - coins[i] >= 0){
                        value[x] = min(value[x], value[x - coins[i]] + 1);
                    }
                }
                ready[x] = true;  
            }
        } 
        cout << value[n] << endl;
    }   
}
