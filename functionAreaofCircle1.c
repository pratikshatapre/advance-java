//no argument no return value
#include<stdio.h>
void areacircle();
int main()
{
    areacircle();
    return 0;
}
void areacircle()
{
    int r;
    printf("enter the radius:");
    scanf("%d",&r);
    int a=3.14*r*r;
    printf("area of circle=%d",a);
}