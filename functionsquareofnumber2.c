// with argument no return value
#include <stdio.h>
void findsquare(int);
int main()
{
    int side;
    printf("enter the value:");
    scanf("%d", &side);
    findsquare(side);
}
void findsquare(int side)
{
    int a=side*side;
    printf("square of number=%d",a);
}
