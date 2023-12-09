#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n;
    cin >> t;

    while(t!=0){
        int hcount = 0, tcount = 0;
        cin >> n;
        char arr[n];
        cin >> arr;
        //check
        for(int j=0; j<n; j++){
            if(arr[j] == 'H'){
                hcount++;
            }else if(arr[j] == 'T'){
                tcount++;
            }
        }
        if(hcount>tcount){
            printf("England \n");
        }else if(tcount > hcount){
            printf("Pakistan \n");
        }
        t--;
    }

    return 0;
}

