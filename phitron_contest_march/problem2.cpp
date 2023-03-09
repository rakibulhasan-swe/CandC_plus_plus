#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;
    cin >> num;
    int oddSum = 0, evenSum = 0;
    for (int i = num.length()-1; i >= 0; i--) {
        if ((num.length()-i) % 2 == 0)
            evenSum += num[i] - '0';
        else
            oddSum += num[i] - '0';
    }
    int diff = abs(oddSum - evenSum);
    if (diff % 11 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
