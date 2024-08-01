
#include <stdio.h>
int main()
{
    int num;
    printf("\n1-marathi \n2-hindi \n3-english:");
    printf("\n enter your choice:");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("\n you are selected marathi:");
        break;
    case 2:
        printf("\n you are selected hindi:");
        break;
    case 3:
        printf("\n you are selected english:");
        break;
    default:
        printf("\n incorrect choice !");
        break;
    }
    return 0;
}
