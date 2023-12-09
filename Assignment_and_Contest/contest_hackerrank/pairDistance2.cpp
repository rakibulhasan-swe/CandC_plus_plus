#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    long long sum = 0;

    for(int i = 0; i < n; i++) {
        sum += (i * (long long)arr[i]) - ((n - i - 1) * (long long)arr[i]);
    }

    cout << sum << '\n';

    return 0;
}
