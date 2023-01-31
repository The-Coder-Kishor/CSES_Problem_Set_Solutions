#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    int length = 0;
    int max_length = 0;
    int pd = '0';
    for(int i = 0; i < n; i++){
        if(s[i] == pd){
            length++;
        }
        else{
            pd = s[i];
            length = 1;
        }
        max_length = max(max_length, length);
    }
    cout << max_length << "\n";
}