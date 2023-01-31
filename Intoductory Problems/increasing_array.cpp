#include <bits/stdc++.h>
using namespace std;

int main() {
    int length; //the length of the array
    cin >> length;

    long long int arr[length]; //the array
    for(int i = 0; i < length; i++){
        cin >> arr[i];
    }
    long long int score = 0;
    for(int i = 1; i < length; i++){
        if(arr[i] < arr[i - 1]){
            score += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }

    cout << score << "\n";
}