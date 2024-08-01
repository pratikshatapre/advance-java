#include<stdio.h>
int main()
{
int age;
printf("enter the age:");
scanf("%d",&age);
if(age>=18)
{
printf("disply can vote");
}
else
{
printf("disply can't vote");
}
return 0;
}