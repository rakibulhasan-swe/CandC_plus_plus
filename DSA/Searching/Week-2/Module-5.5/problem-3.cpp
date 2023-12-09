#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(i%2 == 0){
            if(s[i] == 'z'){
                s[i] = 'a';
            }else{
                s[i]+=1;
            }
        }
    }

    cout << s << "\n";


    return 0;
}
