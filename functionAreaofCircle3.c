// no argument with return value
#include<stdio.h>
int areacircle();
int main()
{
    int sum=areacircle();
    printf("area of circle=%d",sum);
}
int areacircle()
{
    int r;
    printf("enter the radius:");
    scanf("%d",&r);
    int a=3.14*r*r;
    return a;
}
