//print numbers from 1 to 100...

// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <= 50; i++)
//     {
//         printf("%d ",i);
//     }
//     return 0;
// }

//print all the even numbers from 1 to 100...

// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=100; i++)
//     {
//         if (i%2==0)
//         {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

//print all the odd number from 1 to 100...

#include <stdio.h>
int main() {

    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {          //!= not equal to 
            printf("%d ", i);
        }
    }
    return 0;
}


