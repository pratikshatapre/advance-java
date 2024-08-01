#include<stdio.h>
int x=20;
void fun();
int main()
{
    {
        printf("%d",x);
        x++;
    }
    return 0;
}

// #include<stdio.h>
// int x=20;
// void fun();
// int main()
// {
//     x++;
//     printf("%d",x);
// }
