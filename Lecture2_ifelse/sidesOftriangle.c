// take 3 numbers input and tell if they can be the sides of triangle...

#include <stdio.h>
int main()
{
    int a;
    printf("enter 1st side : ");
    scanf("%d", &a);
    int b;
    printf("enter 2nd side : ");
    scanf("%d", &b);
    int c;
    printf("enter 3rd side : ");
    scanf("%d", &c);

    if ((a + b) > c && (b + c) > a && (c + a) > b) // sum of two sides is greater then third side
    {
        printf("valid triangle");
    }
    else
    {
        printf("invalid triangle");
    }

    return 0;
}