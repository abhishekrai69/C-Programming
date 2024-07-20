
#include <stdio.h>
int main()
{
    int y;
    printf("Enter year : ");
    scanf("%d", &y);

    if (y % 4 == 0)
    {
        printf("This is leap year");
    }
    else
    {
        printf("Not a leap year");
    }

    return 0;
}

// take integer input and print the absolute value of that integer...

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);

//     if (n<0)
//     {
//         n = n * (-1);
//     }
//     printf("the absolute value is :%d",n);

//     return 0;
// }