
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);

    if (n > 99 && n < 1000)
    {
        printf("It is a three digit number");
    }
    else
    {
        printf("not a three digit number");
    }

    return 0;
}

// take positive integer input and tell if it is divisible by 5 and 3...

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number : ");
//     scanf("%d", &n);

//     if (n % 5 == 0 && n % 3 == 0)
//     {
//         printf("it is divisible by both 5 & 3");
//     }
//     else
//     {
//         printf("not divisible by both");
//     }

//     return 0;
// }