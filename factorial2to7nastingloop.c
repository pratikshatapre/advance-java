#include<stdio.h>
int main()
{
    int n, i=0;
    for(n=2;n<=7;n++)
    {
        int f=1;
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
            printf("\n the factorial of %d is %d",n,f);
    }
    return 0;

}