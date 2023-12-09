#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    priority_queue<int> maxHeap;

    for (int i=1; i<=q; i++) {
        int op;
        cin >> op;

        if (op == 1){
            int value;
            cin >> value;
            maxHeap.push(value);
        } else if (op == 2) {
            if (!maxHeap.empty()) {
                int maxValue = maxHeap.top();
                cout << maxValue << endl;
                maxHeap.pop();
            }
        }
    }

    return 0;
}

