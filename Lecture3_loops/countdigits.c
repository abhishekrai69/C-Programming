// WAP to count digit of a given numbers..

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     int count =0;
//     while(n!=0)
//     {
//         n = n/10;
//         count++;
//     }
//     printf("the no of digits are %d",count);
//     return 0;
// }


//WAP to print sum of digit of a given number...'

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     int sum = 0;
//     int lastDigit = 0;
//     while(n!=0){
//         lastDigit = n%10;
//         sum = sum + lastDigit;
//         n = n/10;
//     }     
//     printf("The sum of digit is %d",sum);
//     return 0;
// }

//HW WAP to print sum of all the even digits of a given number...

#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Loop through each digit of the number
    while (number != 0) {
        // Extract the last digit of the number
        digit = number % 10;

        // Check if the digit is even
        if (digit % 2 == 0) {
            // Add the even digit to the sum
            sum += digit;
        }

        // Remove the last digit from the number
        number /= 10;
    }

    // Print the sum of even digits
    printf("The sum of even digits is %d\n", sum);

    return 0;
}


