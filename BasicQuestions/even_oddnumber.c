// write a Program to Check Whether a Number is Even or Odd


#include <stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
// true if num is perfectly divisible by 2
    if (x%2==0)
    {
        printf("Even number");
    }else{
        printf("Odd number");
    }
    return 0;
}