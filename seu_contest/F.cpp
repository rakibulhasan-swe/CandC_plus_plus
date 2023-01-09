#include <bits/stdc++.h>
using namespace std;

int binomialCoeff(int n, int k)
{
    int res = 1;
    if (k > n - k)
    k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}
void printPascal(int n)
{
    for (int line = 0; line < n; line++)
    {
        for (int i = 0; i <= line; i++)
            cout << binomialCoeff(line, i) << " ";
        cout <<"\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    printPascal(n);

    return 0;
}
