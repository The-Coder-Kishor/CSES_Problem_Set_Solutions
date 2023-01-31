#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    //f(k) = k^2 * (k^2 - 1) / 2 - 4 * (k - 1) * (k - 2)
    cin >> n;

    cout << 0 << endl;
    for(long long int i = 2; i <= n; i++) {
        cout << (((i*i)*(i*i - 1)/2) - (4*(i-2)*(i-1))) << "\n";
    }
}