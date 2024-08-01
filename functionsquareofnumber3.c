//no argument with return value
#include<stdio.h>
int findsquare();
int main()
{
     int square=findsquare();
     printf("square of number is %d",square);
}
int findsquare()
{
    int result;
    printf(" Enter the number:");
    scanf("%d",&result);
    int a=result*result;
    return a;
}