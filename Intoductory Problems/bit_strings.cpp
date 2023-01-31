#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int ans = 1;
    for(long long int i = 1; i <= n; i++)
        ans = (ans*2)%1000000007;
    cout << ans << "\n";
}