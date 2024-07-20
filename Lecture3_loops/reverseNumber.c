// WAP to print reverse of a given number...

#include<stdio.h>
int main()
{
    int n;
    printf("Entera number :");
    scanf("%d",&n);
    int r = 0;
    while(n>0){
        r = r*10;
        r = r + (n%10);
        n = n/10;
    }
    printf("The reversed number is %d",r);
    return 0;
}


// WAP to print the sum of given number and its reverse..

// #include <stdio.h>
// int main() {

//     int number, d, sum = 0, reverse = 0;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     while (number != 0) {
//         d = number % 10;
//         sum += d;
//         reverse = reverse * 10 + d;
//         number /= 10;
//     }
//     printf("\nSum of digit = %d", sum);
//     printf("\nReverse of the number = %d", reverse);
    
//     return 0;
// }
