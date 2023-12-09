#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n = 20,a, b, sum = 0, m = 0, result = 0;
    char arr[n];
    scanf("%s", arr);
    scanf("%d %d", &a, &b);

    int l = strlen(arr);

    for(int i=0; i<l; i++){
        if(arr[i] == '+'){
            sum+= (a+b);
        }else if(arr[i] == '*'){
            m += (a*b);
        }
    }
    result = sum+m;
    printf("%d\n", result);


    return 0;
}

