// //substraction
// //no return no argument
// #include<stdio.h>
// void substraction();
// int main()
// {
//     substraction();
//     return 0;
// }
// void substraction()
// {
//     int a,b;
//     printf("enter the number:");
//     scanf("%d %d",&a,&b);
//     int c=(a-b);
//     printf(" substraction of two number=%d",c);
// }

// // no return with argument
// #include<stdio.h>
// void substraction(int,int);
// int main()
// {
//     int a,b;
//     printf("enter the number:");
//     scanf("%d %d",&a,&b);
//     substraction(a,b);
// return 0;
// }
// void substraction(int a,int b)
// {
//     int c=(a-b);
//     printf("substraction of two number=%d",c);
// }


//with return no argument
#include<stdio.h>
int sub();
int main()
{
      int c=sub();
    printf(" substraction of two number= %d",c);
}
int sub()
{
    int a,b;
    printf("enter the number:");
    scanf("%d %d",&a,&b);
    int c=a-b;
    return c;
}
