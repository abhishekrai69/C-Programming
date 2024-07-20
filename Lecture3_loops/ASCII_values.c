// write a program to print the ascii values and ther equivalent characters of 26 alphabet using while loops...

#include<stdio.h>
int main()
{
    for(int i=65;i<=90;i++){
        char ch = (char)i;
        printf("%c -> ",ch);
        printf("%d\n",i);
    }
    return 0;
}