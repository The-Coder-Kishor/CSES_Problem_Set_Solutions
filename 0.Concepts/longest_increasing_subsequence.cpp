#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int length[n];
    for(int k = 0; k < n; k++){
        length[k] = 1;
        for(int i = 0; i < k; i++){
            if(arr[i] < arr[k]){
                length[k] = max(length[k], length[i] + 1);
            }
        }
    }
    int max_length = 0;
    for(auto c: length){
        max_length = max(max_length, c);
    }
    cout << max_length << endl;
}