#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int sum = n*(n+1)/2;
    if(sum%2 == 1) {
        cout << "NO" << "\n";
        return 0;
    }
    else{
        cout << "YES" << "\n";
        long long int required_sum = sum/2;
        vector<long long int> set1, set2;
        for(long long int i = n; i >= 1; i--) {
            if(i <= required_sum) {
                set1.push_back(i);
                required_sum -= i;
            }
            else
                set2.push_back(i);
        }
        cout << set1.size() << "\n";
        for(long long int i = 0; i < set1.size(); i++)
            cout << set1[i] << " ";
        cout << "\n";
        cout << set2.size() << "\n";
        for(int i = 0; i < set2.size(); i++)
            cout << set2[i] << " ";
        cout << "\n";
    }
}