#include<stdio.h>
int main()
{
    int n,i,m=0,flag=0;
    printf("enter the number to check prime:");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    printf("number is prime");
    else
    printf("number is not prime");
    return 0;
}