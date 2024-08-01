// //area of triangle
// //without argument
// #include<stdio.h>
// #define base 8
// int main()
// {
//     int h=5,a;
//     a=.5*base*h;
//     printf("\n area of triangle=%d",a);
//     return 0;
// } 

//with argument
#include<stdio.h>
#define a 0.5
#define TRIANGLE(b,h) (a*b*h)
int main()
{
    int b=7,h=3,c;
    c=TRIANGLE(b,h);
    printf("area of triangle=%d",c);
    return 0;
}