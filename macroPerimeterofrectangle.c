//perimeter of rectangle
// //without argument
// #include<stdio.h>
// #define length 5
// int main()
// {
//     int w=3,p;
//     p=(length+w)*2;
//     printf("\n perimeter of rectangle=%d",p);
//     return 0;
// }


//with argument
#include<stdio.h>
#define PERIMETER(l,w) (l+w)*2
int main()
{
    int l=2,w=4,c;
    c=PERIMETER(l,w);
    printf("perimeter of rectangle=%d",c);
    return 0;
}