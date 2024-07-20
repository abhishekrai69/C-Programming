    // display this ap - 4,7,10,13,16...upto n terms

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);

//     for (int i = 4; i <= 3*n+1; i=i+3)
//     {
//         printf("%d ",i);
//     }

//     return 0;
// }

    // same problem without using maths here we are using extra variables..

#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    int a = 4;
    for(int i=1; i<=n; i++){
        printf("%d ",a);
        a = a+3;
    }
    return 0;
}

    // Dicreasing ap display this A.P - 100,97,94,... upto all terms which are positive

// #include <stdio.h>
// int main()
// {
//     // int n;
//     // printf("enter a number: ");
//     // scanf("%d",&n);

//     int a = 100;
//     for(int i=1; a>0; i++){
//         printf("%d ",a);
//         a = a-3;
//     }
//     return 0;
// }