// // factorial number
// // with argument with return value
// #include <stdio.h>
// int factorial(int);
// int main()
// {
//     int n, res;
//     printf("enter the number:");
//     scanf("%d", &n);
//     res = factorial(n);
//     printf("factorial number is %d", res);
//     return 0;
// }
// int factorial(int n)
// {
//     int f = 1, i;
//     for (i = 1; i <= n; i++)
//     {
//         f = f * i;
//     }
//     return f;
// }


//no argument no return value
#include<stdio.h>
void factorial();
int main()
{
    factorial();
    return 0;
}
void factorial()
{
    int n,f=1,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    f=f*i;
    }
    printf("factorial number is %d",f);
} 