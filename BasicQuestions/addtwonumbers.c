//write a program to add two numbers in c language...
//Write a C program to input two numbers from user and calculate their sum
//C Program to Add Two Integers


#include<stdio.h>
int main(){

    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    //calculate the sum
    sum = a + b;
    printf("sum of %d and %d is: %d",a,b,sum);
    return 0;
}



//Write a program which prints %d as output on the screen

// #include<stdio.h>
// int main()
// {
//     printf("%%d");
//     return 0;
// }