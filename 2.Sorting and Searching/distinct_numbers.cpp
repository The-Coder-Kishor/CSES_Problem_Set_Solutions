#include <bits/stdc++.h>
using namespace std;

int main(){
    set<long long int> a;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        long long int temp;
        cin >> temp;
        a.insert(temp);
    }
    cout << a.size() << "\n";
}