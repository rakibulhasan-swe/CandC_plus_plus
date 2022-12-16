#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    int count = 0;
    int arr[5] = {19, 10, 8, 17, 9};
    for(int j=0; j<n; j++){
        int x = arr[j];
        int result = sqrt(x);
        if(result == (x*x)){
            printf("%d", count++);
        }
     }

    return 0;
}
