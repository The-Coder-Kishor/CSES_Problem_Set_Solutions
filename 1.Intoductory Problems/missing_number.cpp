#include <bits/stdc++.h>

using namespace std;

int N, x, sum;

int main(){
    cin >> N;
    for(int i = 1; i <= N; i++)
        sum ^= i;
    for(int i = 0; i < N-1; i++){
        cin >> x;
        sum ^= x;
    }
    cout << sum << "\n";
}