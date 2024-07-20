// take 3 positive integers input and print the gretest of them...

// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("enter first number : ");
//     scanf("%d", &a);
//     int b;
//     printf("enter second number : ");
//     scanf("%d", &b);
//     int c;
//     printf("enter third number : ");
//     scanf("%d", &c);

//     if (a > b && a > c)
//     {
//         printf("a is greatest");
//     }
//     if (b > a && b > c)
//     {
//         printf("b is gretest");
//     }
//     if (c > a && c > b)
//     {
//         printf("c is gretest");
//     }

//     return 0;
// }

// take 4 positive integers input and print the greatest of them...

// #include <stdio.h>
// int main()
// {
//     int a, b, c, d;
//     printf("enter 1st number :");
//     scanf("%d", &a);
//     printf("enter 2st number :");
//     scanf("%d", &b);
//     printf("enter 3rd number :");
//     scanf("%d", &c);
//     printf("enter 4th number :");
//     scanf("%d", &d);

//     if (a > b && a > c && a > d)
//     {
//         printf("a is gretest");
//     }
//     if (b > a && b > c && b > d)
//     {
//         printf("b is greatest");
//     }
//     if (c > a && c > b && c > d)
//     {
//         printf("c is gretest");
//     }
//     if (d > a && d > b && d > c)
//     {
//         printf("d is gretest");
//     }
//     else
//     {
//         printf("all are equal");
//     }

//     return 0;
// }

// if the ages of ram,shyam and ajay are input through the keyboard,write a program to determine the youngest of three...

#include <stdio.h>
int main()
{
    int ram;
    printf("enter age of ram : ");
    scanf("%d", &ram);
    int shyam;
    printf("enter age of shyam : ");
    scanf("%d", &shyam);
    int ajay;
    printf("enter age of ajay : ");
    scanf("%d", &ajay);

    if (ram < shyam && ram < ajay)
    {
        printf("ram is youngest of them");
    }
    if (shyam < ram && shyam < ajay)
    {
        printf("shyam is youngest of them");
    }
    if (ajay < shyam && ajay < ram)
    {
        printf("ajay is youngest of them");
    }

    return 0;
}
