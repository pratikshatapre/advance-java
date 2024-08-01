//with argument no return value
#include<stdio.h>
void areacircle(int);
int main()
{
    int r;
    printf("enter the radius:");
    scanf("%d",&r);
    areacircle(r);
    return 0;
}
void areacircle(int r)
{
  int c=3.14*r*r;
    printf("area of circle=%d",c);
}

