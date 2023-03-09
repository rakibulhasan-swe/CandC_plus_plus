#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    stack<int> st;
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int v;
            cin >> v;
            if (st.empty()) {
                st.push(v);
            } else {
                st.push(max(v, st.top()));
            }
        } else {
            if (!st.empty()) {
                cout << st.top() << endl;
                st.pop();
            }
        }
    }
    return 0;
}
