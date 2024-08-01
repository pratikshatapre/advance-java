
#include <stdio.h>
int main()
{
    int ch, r, l, w, b, h, side;
    float a1,a2,a3,a4;
    printf("\n1 circle \n2 rectangle \n3 square \n4 triangle\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("enter radious of circle\n");
        scanf("%d", &r);
        a1 = 2 * 3.14 * r;
        printf("area of circle is =%f", a1);
        break;
    case 2:
        printf("enter length and width \n");
        scanf("%d %d", &l, &w);
        a2 = l * w;
        printf("area of rectangle is %f", a2);
        break;
    case 3:
        printf("enter side of square \n");
        scanf("%d", &side);
        a3= side * side;
        printf("area of square is %f", a3);
        break;
    case 4:
        printf("enter the base and height \n");
        scanf("%d %d", &b, &h);
        a4 = .5 * b * h;
        printf("area of triangle is =%f", a4);
        break;
    default:
        printf("please enter the option from the given choice:");
        break;
    }
    return 0;
}
