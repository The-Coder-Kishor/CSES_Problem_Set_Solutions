#include <bits/stdc++.h>
using namespace std;

set<string> st;
void permutations(string prefix, string suffix){
    if(suffix.length() == 0){
        st.insert(prefix);
        return;
    }
    for(int i = 0; i < suffix.length(); i++){
        permutations(prefix + suffix[i], suffix.substr(0, i) + suffix.substr(i+1));
    }
}

int main() {
    string s;
    cin >> s;
    permutations("", s);
    cout << st.size() << "\n";
    for(auto i: st){
        cout << i << "\n";
    }
    return 0;
}