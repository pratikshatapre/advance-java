#include <stdio.h>
int main()
{
    int n, sum = 0, rem;
    printf("enter the number:");
    scanf("%d", &n);
    int t = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("sum of digits %d is %d", t, sum);
    return 0;
}