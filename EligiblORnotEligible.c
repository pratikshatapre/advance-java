#include<stdio.h>
int main()
{
    int marks;
    printf("\n enter aggregate mark:");
    scanf("%d",&marks);
    if(marks >=60)
    {
        printf("\n you are eligible");
    }
    else
    {
        printf("\n you are not eligible");
    }
    return 0;
}