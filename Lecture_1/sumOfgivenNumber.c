#include<stdio.h>
int main()
{
    int x;
    printf("enter first number\n");
    scanf("%d",&x);

    int y;
    printf("enter second number\n");
    scanf("%d",&y);

    int sum = x * y;
    printf("multipli of two number is : %d",sum);

    return 0;
}


//wap to take two integers input a and b where a>b, and find the remainder when a is divided by 2...
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("enter first number:");
//     scanf("%d",&a);
//     printf("enter second number:");
//     scanf("%d",&b);
//     //int q = a/b;
//     int r = a%b;
//     printf("the remainder is : %d",r);

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 40; //modulo operator is used to find remainder
//     int b = 6;
//     int r = a % b; // % is called as modulus
//     printf("%d",r);

//     return 0;
// }

//wap where you take float input and print the fractional part of the given number...

// #include<stdio.h>
// int main()
// {
//     float x = 5.7;
//     int y = x;
//     printf("%d\n",y);
//     float z = x - y;
//     printf("%f",z);

// return 0;
// }
