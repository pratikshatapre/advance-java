#include<stdio.h>
int main()
{
    int  multi;
    for(int j=15;j<=20;j++)
    {
        for(int i=1;i<=10;i++)
        {
            multi=j*i;
            printf("%d",multi);
        }
    }
    return 0;
}