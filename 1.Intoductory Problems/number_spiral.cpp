#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;
    while(testcases--) {
        long long int x, y, ans;
        cin >> x >> y;
        if(x < y){
            if(y%2 == 1)
                ans = y*y - x + 1;
            else
                ans = (y-1)*(y-1) + x;
            cout << ans << "\n";
        }
        else {
            if(x%2 == 0)
                ans = x*x - y + 1;
            else
                ans = (x-1)*(x-1) + y;
            cout << ans << "\n";
        }
    }
    return 0;
}