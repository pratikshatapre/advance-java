#include <stdio.h>
int main()
{
    char ch;
    printf("enter a value:");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
    {
        printf("\n it is a character");
    }
    else
    {
        printf("\n it is a digit");
    }
    return 0;
}