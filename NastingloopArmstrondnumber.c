#include<stdio.h>
int main()
{
    int num,rem,sum,i;
    printf("enter a number:");
    
    for(i=100;i<=1000;i++)
    {
        num=i;
        sum=0;
        for(;num>0;)
        {
            rem=num%10;
            sum=sum+(rem *rem* rem);
            num=num/10; 
        }      
    }
    if(sum == i)
    {
        printf("%d is a armstrong number \n",i);
    } 
    return 0;


}