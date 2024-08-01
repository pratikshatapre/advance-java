#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter the number:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2>num3)
    {
        printf("disply num1,num2 is greater");
    }
    else
    {
        printf("disply num1,num3 is greater");
    }

    return 0;
}