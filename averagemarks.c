//arry
//average marks of 5 students
#include<stdio.h>
int main()
{
    int marks[5];
    int i,sum=0,avg=0;
    printf("\n enter the marks of 5 student:\t");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("sum=%d",sum);
    printf("avg=%d",avg);
    return 0;
}