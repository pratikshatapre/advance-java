// //circumference of circle
// //without argument
// #include<stdio.h>
// #define pi 3.14
// int main()
// {
//     float r=2.5,c;
//     c=2*pi*r;
//     printf("\n circumference of circle=%f",c);
//     return 0;
// }


//with argument
#include<stdio.h>
#define pi 3.14
#define CIRCUMFERENCE(r) (2*pi*r)
int main()
{
    int r=8,c;
    c=CIRCUMFERENCE(r);
    printf("circumference of circle=%d",c);
    return 0;
}