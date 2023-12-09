#include<stdio.h>

struct info
{
    char name[100];
    int rollNumber;
    int marks;
};

int main(){
     struct info p1;
     printf("Enter information: \n");
     printf("Enter name: ");
     scanf("%s", &p1.name);
     printf("Enter roll number: ");
     scanf("%d", &p1.rollNumber);
     printf("Enter marks: ");
     scanf("%d", &p1.marks);

     printf("\nDisplaying information: \n");
     printf("Name: %s\n", p1.name);
     printf("Roll Number: %d\n", p1.rollNumber);
     printf("Marks: %d\n", p1.marks);


    return 0;
}


