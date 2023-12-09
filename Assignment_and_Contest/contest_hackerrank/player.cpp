#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int team, n;
        cin >> team >> n;

        char player = (team == 1) ? 'a' : 'A';
        char player_name = player+n-1;

        if (team == 1) {
            cout << "Unmarried-" << player_name << endl;
        } else {
            cout << "Married-" << player_name << endl;
        }
    }
    return 0;
}
