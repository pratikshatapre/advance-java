
// // maximum element
// #include <stdio.h>
// int main()
// {
//     int a[100];
//     int i, size, max;
//     printf("\n enter the number:");
//     scanf("%d", &size);
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     max = a[0];
//     for (i = 0; i < size; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     printf("maximum value of array=%d", max);
//     return 0;
// }


//minimun value
#include <stdio.h>
int main()
{
    int a[100];
    int i, size, min;
    printf("\n enter the number:");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for (i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
            min= a[i];
        }
    }
    printf("minimun value of array=%d", min);
    return 0;

    
}