//5 element multiply array by 3
//with argument no return valve
#include<stdio.h>
void array(int[],int);
int main()
{
    int num[5];
    int i;
    printf("enter the number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    array(num,5);
    return 0;
}
void array(int e[],int n)
{
    int i,a;
    for(i=0;i<5;i++)
    {
        a=e[i]*3;
        printf("\t multiply by 3 number= %d",a);
    }

}