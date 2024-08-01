//with argument with return value
#include<stdio.h>
int findsquare(int);
int main()
{
    int num,result=0;
    printf("enter a number:");
    scanf("%d",&num);
    result=findsquare(num);
    printf("squqre of number=%d",result);
}
int findsquare(int a)
{
    int result;
    result=a*a;
    return(result);
}
