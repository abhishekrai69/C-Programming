// write a program to swap two nummbers

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter first numbers: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;
    printf("After swapping, first number= %d\nAfter swapping, second number= %d",a,b);
    return 0;
}


// write a program to swap two numbers without using third variable

// #include<stdio.h>
// int main()
// {
//     int p,q;
//     printf("Enter first number: ");
//     scanf("%d",&p);
//     printf("Enter second number: ");
//     scanf("%d",&q);

//     p=p+q;
//     q=p-q;
//     p=p-q;
//     printf("After swaping,first number= %d\nAfter swaping ,second number= %d",p,q);
//     return 0;
// }