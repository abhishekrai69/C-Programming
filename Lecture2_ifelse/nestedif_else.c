// take positive integer input and tell if it is divisible by 5 and 3 both...

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number : ");
//     scanf("%d",&n);

//     if (n%5==0)
//     {
//         if(n%3==0){
//             printf("the number is divisible by 5 and 3");
//         }
//     }
//     else
//     {
//         printf("not divisible by 5 and 3");
//     }

//     return 0;
// }

// take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15...

#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);

    // if (n%3==0 && n%5==0)
    // {
    //     if(n%15!=0){
    //         printf("the number is divisible by both but not by 15");
    //     }
    //     else{
    //         printf("the number is divisible by 15");
    //     }
    // }
    // else{
    //     printf("the number is not divisible by 3 or 5");
    // }
    // another method of above question...
    if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0)
    {
        printf("the number is divisible by 5 or 3 but not by 15");
    }
    else
    {
        printf("the number is not matching ");
    }

    return 0;
}