#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int res = (a+c+b) / 3;

    if(res == b){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

    return 0;
}
