#include<stdio.h>

int main(){

    int t, arr[6];
    scanf("%d", &t);

    while(t!=0){
        int flag = 0;
        for(int i=0; i<6; i++){
            scanf("%d", &arr[i]);
        }
        //check
        for(int j=0; j<6; j++){
            if(arr[j] > 0){
                flag++;
                break;
            }
        }
        if(flag == 0){
            printf("YES\n");
        }else if(flag!=0){
            printf("NO\n");
        }
        t--;
    }


    return 0;
}
