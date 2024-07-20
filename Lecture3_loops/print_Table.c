    // print the table of 12...

// #include<stdio.h>
// int main()
// {
//     for (int i = 12; i <=120; i=i+12)
//     {
//         printf("%d ",i);
//     }
//     return 0;
// }

// print the table of n.here n is an integer which user will input...
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for (int i = 1; i <= 10; ++i)
    {
        printf("%d * %d = %d\n", n,i,n*i);
    }
    return 0;
}
