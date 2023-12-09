#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> A(n);
    for (int i=0; i<n; i++) cin >> A[i];

    int m;
    cin >> m;
    vector<int> B(m);
    for (int i=0; i<m; i++) cin >> B[i];

    int X;
    cin >> X;

    A.insert(A.begin()+X, B.begin(), B.end());

    for(int i=0; i<A.size(); i++) cout << A[i] << " ";
    
    cout << "\n";

    return 0;
}
