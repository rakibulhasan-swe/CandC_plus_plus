#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	long long a, b;
	while(cin >> a >> b){
		cout << max(a, b) - min(a, b) << "\n";
	}

	return 0;
}
