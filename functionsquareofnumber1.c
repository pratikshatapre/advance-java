// no argument no return value
#include<stdio.h>
void findsquare();
int main()
{
    findsquare();
    return 0;
}
void findsquare()
{
    int side;
    printf("enter a square:");
    scanf("%d",&side);
    int a=side*side;
    printf("%d",a);
}
