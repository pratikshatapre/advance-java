#include <stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("even number");

        if (num % 4 == 0)
        {
            printf("divisible by 4");
        }
        else
        {
            printf("not divisible by 4");
        }
    }
    else
    {
        printf("odd number");
        if (num % 3 == 0)
        {
            printf("divisible by 3");
        }
        else
        {
            printf("not divisible by 3");
        }
        return 0;
    }
}