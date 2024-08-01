// //area of rectangle
// //without argument
// #include<stdio.h>
// #define length 6
// int main()
// { 
//     int w=2,a;
//     a=length*w;
//     printf("\n area of rectangle =%d",a);
//     return 0;

// }



// with argument
#include<stdio.h>
#define rectangle(l,b) (l*b)
int main()
{
    int l=4,b=6,c;
    c=rectangle(l,b);
    printf(" area of rectangle=%d",c);
    return 0;
}