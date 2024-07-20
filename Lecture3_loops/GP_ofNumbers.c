// display this G.P - 1,2,4,8,16,32,...upto n terms
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter your number: ");
//     scanf("%d",&n);

//     int a=1;
//     for (int i = 1; i <=n; i++)
//     {
//         printf("%d ",a);
//         a = a*2;
//     }
//     return 0;
// }

// H.W display this G.P - 3,12,48,...upto n terms
#include<stdio.h>
int main()
{
    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    int a=3;
    for (int i = 1; i <=n; i++)
    {
        printf("%d ",a);
        a = a*4;
    }
    return 0;
}