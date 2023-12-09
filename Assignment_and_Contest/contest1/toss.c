#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n;
    scanf("%d", &t);

    while(t!=0){
        int hcount = 0, tcount = 0;
        scanf("%d", &n);
        char arr[n];
        scanf("%s", arr);
        //check
        for(int i=0; i<n; i++){
            if(arr[i] == 'H'){
                hcount++;
            }else if(arr[i] == 'T'){
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
