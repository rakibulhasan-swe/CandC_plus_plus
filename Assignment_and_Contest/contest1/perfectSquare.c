#include <stdio.h>
#include <math.h>

int main(){

    int t, n;
    scanf("%d", &t);

    while(t!=0){
        int count = 0;
        scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        //check
        for(int j=0; j<n; j++){
            int result = sqrt(arr[j]);
            if((result * result) == (arr[j])){
                count++;
            }
        }
        if(count!=0){
            printf("%d\n", count);
        }else{
             count = -1;
             printf("%d\n", count);
        }
        t--;
    }


    return 0;
}

