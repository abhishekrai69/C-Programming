// write a program to print out all armstrong number between 1 and 500.if sum of cubes of each digit of the number is equal to the number itself,then the number is called an armstrong number...

#include <stdio.h >  
int main()  
{  
    int num, count = 1, rem, sum;  
    while(count <= 500)  
    {  
        num = count;  
        sum = 0;  
        while(num)  
        {  
            rem = num % 10;  
            sum = sum + (rem * rem * rem);  
            num = num / 10;  
        }  
  
        if(count == sum)  
        {  
            printf("%d is a Armstrong number\n", count);  
        }  
        count++;  
    }  
     return 0;  
}  