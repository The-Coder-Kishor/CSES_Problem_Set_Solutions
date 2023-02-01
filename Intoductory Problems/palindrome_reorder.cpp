#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    vector<int> a(26);
    for (char c : s) {
        a[c - 'A']++;
    }

    int check = 0;
    for(int i = 0; i < 26; i++)
        check += (a[i] % 2);
    if(check > 1){
        cout << "NO SOLUTION\n";
        return 0;
    }
    string result;
    for (int i = 0; i < 26; i++){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++) result.push_back(i + 'A');
        }
    }
    for (int i = 0; i < 26; i++){
        if(a[i]%2){
            for(int j = 0; j < a[i]; j++) result.push_back(i + 'A');
        }
    }
    for (int i = 25; i >= 0; i--){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++) result.push_back(i + 'A');
        }
    }
    cout << result << "\n";
}