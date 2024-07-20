//wap to find volume of a sphere...

/*#include<stdio.h>
int main()
{
    int r = 7;
    float v = 4 * 3.14 * r * r * r/3;

    printf("the volume is : %f",v);
    return 0;
}*/

//wap to find or display area of circle with given radius...

#include<stdio.h>
int main()
{
    float radius;
    printf("enter radius : ");
    scanf("%f",&radius);
    float pi = 3.14;
    float area = pi * radius * radius;
    printf("Area of circle is : %f",area);
    return 0;
}