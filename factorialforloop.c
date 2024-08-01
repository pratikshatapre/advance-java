#include<stdio.h>
int main()
{
    int num,c,f=1;
    printf("enter a number is  find factorial \n");
    scanf("%d",&num);
    for(int c=1;c<=num;c++)
    {
        f=f*c;
    }
        printf("factorial of %d is %d \n",num,f);
    
    return 0;
}