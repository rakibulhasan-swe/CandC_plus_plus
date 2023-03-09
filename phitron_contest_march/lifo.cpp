#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    stack<char>st;
    for(char c : s) {
        if(c == '{')
            st.push(c);
        else if(c == '}'){
            if(st.empty()) {
                cout << "0\n";
                return 0;
            }
            else{
                st.pop();
            }
        }
    }

    if(st.empty())
        cout << s.length() << endl;
    else
        cout << "0\n";

    return 0;
}
