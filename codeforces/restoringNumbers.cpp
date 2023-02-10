//https://codeforces.com/problemset/problem/1154/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d, sum_of_3 = 0, i = 0;
    vector<int>arr(3);

    cin >> a >> b >> c >> d;

    int maxi = max({a, b, c, d});

    if(a == maxi){
        sum_of_3 = a;
    }else if(b == maxi){
        sum_of_3 = b;
    }else if(c == maxi){
        sum_of_3 = c;
    }else if(d == maxi){
        sum_of_3 = d;
    }

    if(sum_of_3-a!=0)
    {
        arr[i] = (sum_of_3-a);
        i++;
    }
    if(sum_of_3-b!=0)
    {
        arr[i] = (sum_of_3-b);
        i++;
    }
    if(sum_of_3-c!=0)
    {
        arr[i] = (sum_of_3-c);
        i++;
    }
    if(sum_of_3-d!=0)
    {
        arr[i] = (sum_of_3-d);
        i++;
    }


    for(int i=0; i<arr.size(); i++){
        if(i==2)
            cout << arr[i];
        else
            cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}
