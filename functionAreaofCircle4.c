
//with argument with return value
#include<stdio.h>
int areacircle(int);
int main()
{
    int r;
    printf("enter the radius:");
    scanf("%d",&r);
    int c=areacircle(r);
    printf("area of circle=%d",c);
}
int areacircle(int radius)
{
    int r;
   int c=3.14*r*r;
    return(c);
}
