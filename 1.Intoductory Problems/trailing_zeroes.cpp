#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int ans = 0;
    while(n != 0){
        n /= 5;
        ans += n;
    }
    cout << ans << "\n";
}