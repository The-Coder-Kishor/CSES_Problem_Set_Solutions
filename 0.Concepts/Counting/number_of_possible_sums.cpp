#include <bits/stdc++.h>
using namespace std;
const int m = 1e9+7;

int main() {
    int n;
    cin >> n;
    int count[n];
    int available[] = {1,3,4};
    count[0] = 1;
    for(int i = 1; i <= n; i++){
        count[i] = 0;
        for(auto c: available){
            if(i - c >= 0){
                count[i] = (count[i] + count[i-c]) % m;
            }
        }
    }
    cout << count[n] << "\n";
}