#include<stdio.h>
int main()
{
    int week;
    printf("enter the week number(1-7)");
    scanf("%d",&week);
    if(week==1)
    {
        printf("monday is working day");
    }
    else if(week==2)
    {
        printf("tuesday is working day");
    }
    else if(week==3)
    {
        printf("wednesday is workind day");
    }
    else if(week==4)
    {
        printf("thuesday is working day");
    }
    else if(week==5)
    {
        printf("friday is working day");
    }
    else if(week==5)
    {
        printf("saturday is weekend day");
    }
    else if(week==6)
    {
        printf("sunday is weekend day");
    }
    else
    {
        printf("enter a number (1-7)");
    }
    return 0;
}