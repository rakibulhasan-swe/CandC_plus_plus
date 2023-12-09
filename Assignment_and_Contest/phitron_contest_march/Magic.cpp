#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }
    string res;
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    for (int i = 0; i < res.size() - 1; i++) {
        if (res[i] == 'R' && res[i+1] == 'B') {
            res[i] = 'P';
            res.erase(i+1, 1);
        } else if (res[i] == 'R' && res[i+1] == 'G') {
            res[i] = 'Y';
            res.erase(i+1, 1);
        } else if (res[i] == 'B' && res[i+1] == 'G') {
            res[i] = 'C';
            res.erase(i+1, 1);
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << solve(s) << endl;
    }
    return 0;
}

