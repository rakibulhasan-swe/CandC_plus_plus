#include<stdio.h>


int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // for largest
    if((a>b) && (a>c) && (a>d)){
        printf("Largest = %d", a);
    }else if((b>a) && (b>c) && (b>d)){
        printf("Largest = %d", b);
    }else if((c>a) && (c>b) && (c>d)){
        printf("Largest = %d", c);
    }else if((d>a) && (d>b) && (d>c)){
        printf("Largest = %d", d);
    }

    // for smallest
    if((a<b) && (a<c) && (a<d)){
        printf("\nSmallest = %d", a);
    }else if((b<a) && (b<c) && (b<d)){
        printf("\nSmallest = %d", a);
    }else if((c<a) && (c<b) && (c<d)){
        printf("\nSmallest = %d", c);
    }else if((d<a) && (d<b) && (d<c)){
        printf("\nSmallest = %d", d);
    }

    printf("\n");

    return 0;
}
