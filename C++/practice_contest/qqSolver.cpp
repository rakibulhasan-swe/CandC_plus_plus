#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    char a = str[0], b = str[2];

    int num1 = int(a - '0');
    int num2 = int(b - '0');


    cout << num1*num2 << endl;



    return 0;
}
