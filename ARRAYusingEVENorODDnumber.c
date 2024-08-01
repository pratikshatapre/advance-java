//even or odd number using array
#include<stdio.h>
int main()
{
    int a[10];
    int i;
    printf("\n enter the number:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
    {
        printf("\n even number=%d",a[i]);
    }
    else
    {
        printf("\n odd number=%d",a[i]);
    }
    }
    return 0;
}