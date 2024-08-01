// //area of circle
// //without argument
// #include<stdio.h>
// #define pi 3.14
// int main()
// {
//     float r=3.1,a;
//     a=pi*r*r;
//     printf("\n area of circle=%f",a);
//     return 0;
// }





//with argument
#include<stdio.h>
#define pi 3.14
#define AREA(r) (pi*r*r)
int main()
{
    float r=3.1,x;
    x=AREA(r);
    printf("\n area of circle=%f",x);
    return 0;

}