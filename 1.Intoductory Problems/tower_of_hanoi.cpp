#include <bits/stdc++.h>
using namespace std;
void tower_of_hanoi(int n, char src, char aux, char dest){
    if(n == 1){
        cout << src << " " << dest << "\n";
        return;
    }
    else{
        tower_of_hanoi(n-1, src, dest, aux);
        cout << src << " " << dest << "\n";
        tower_of_hanoi(n-1, aux, src, dest);
    }

}
int main() {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << "\n";
    tower_of_hanoi(n, '1', '2', '3');
}