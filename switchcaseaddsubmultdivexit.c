#include <stdio.h>
int main()
{
    int a, b;
    int op;
    printf("\n1-addition \n2-substraction \n3-multiplication \n4-divition \n5-exit:");
    printf("enter the value of a,b");
    scanf("%d %d", &a, &b);
    switch (op)
    {
    case 1:
        printf("addition of %d and %d is:%d", a, b, a + b);
        break;
    case 2:
        printf("substraction of %d and %d is:%d", a, b, a - b);
    case 3:
        printf("multiplication of %d and %d is:%d", a, b, a * b);
        break;
    case 4:
        printf("divition of %d and %d is:%d", a, b, a / b);
        break;
    case 5:
        printf(" you have press exit.");
        break;
    default:
        printf("enter your correct choice.");
        break;
    }
    return 0;
}