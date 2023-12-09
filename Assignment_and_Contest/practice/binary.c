#include<stdio.h>

int main(){
    int t, n;
    scanf("%d", &t);

    while(t!=0){
        int count = 0;
        scanf("%d", &n);
        char arr[n];
        scanf("%s", arr);

        for(int i=0; i<n; i++){
            if((arr[i]=='0' && arr[i+1]=='1') || (arr[i]=='1' && arr[i+1]=='0')){
                count++;
            }
        }
        printf("%d\n", count);
        t--;
    }

    return 0;
}
