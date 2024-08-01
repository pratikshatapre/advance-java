// //reverse number
// #include<stdio.h>
// int main()
// {
//     int num,rev=0,rem;
//     printf("enter a number:");
//     scanf("%d",&num);
//     for(int i=num;num!=0;i++)
//     {
//         rem=num%10;
//         rev=(rev*10)+rem;
//         num=num/10;
//     }
//     printf("reverse number is: %d",rev);
//     return 0;
// }

// //array using reverse number
// #include<stdio.h>
// int main()
// {
//     int a[5],i;
//     printf(" enter the number:");
//     for(i=0;i<=4;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("\n reverse number:");
//     for(i=4;i>=0;i--)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;
// }

//reverse chact using string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("\n enter a string:");
    gets(str);
        printf(" string is=%s",str); 
        printf("\n reverse string is:%s",strrev(str));
    return 0;
}