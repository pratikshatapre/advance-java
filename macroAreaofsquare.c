// //area of square
// //without argument
// #include<stdio.h>
// #define side 2
// int main()
// {
//     int a;
//     a=side*side;
//     printf("\n area of square=%d",a);
//     return 0;
// }


// with argument
#include<stdio.h>
#define SQUARE(a) (a*a)
int main()
{
    int a=3,c;
    c= SQUARE(a);
    printf("area of circlr=%d",c);
    return 0;
}
