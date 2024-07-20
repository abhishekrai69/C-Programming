//Write a program to calculate area of a circle...

#include<stdio.h>
int main()
{
    int r;
    float area;
    printf("Enter radius of a circle: ");
    scanf("%d",&r);
    //formula of area of a circle
    area = 3.14 * r * r;
    printf("Area of given circle is: %f",area);
    return 0;
}