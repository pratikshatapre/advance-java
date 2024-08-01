// //2D array
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     int multi_dim[4][3]={{10,20,30},{40,50,60},{70,80,90},{100,110,120}};
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("%d \t",multi_dim[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 2D array  using accepting user
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     int multi_dim[4][3];
//     printf("\n enter array element:");
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d \t", &multi_dim[i][j]);
//         }
//     }

//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d \t", multi_dim[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //2D array using pointer
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     int multi_dim[4][3]={{10,20,30},{40,50,60},{70,80,90},{100,110,120}};
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("%d \t",*(*(multi_dim+i)+j));
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //2D array pointer  using accepting user
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     int multi_dim[4][3];
//     printf("\n enter array element:");
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d \t", (*(multi_dim+i)+j));
//         }
//     }
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d \t", *(*(multi_dim+i)+j));
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 2D array using function
// #include <stdio.h>
// void disamount(int[][2], int);
// int main()
// {
//     int fdamt[3][2], i, j, no;
//     printf("enter array element");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             scanf("%d \t", &fdamt[i][j]);
//         }
//     }
//     disamount(fdamt, no);
//     return 0;
// }
// void disamount(int fdamt[][2], int no)
// {
//     int i,j;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             printf("%d \t", fdamt[i][j]);
//         }
//         printf("\n");
//     }
// }

// // 2D array using function using pointer
// #include <stdio.h>
// void disamount(int (*p)[2], int);
// int main()
// {
//     int fdamt[3][2], i, j, no;
//     printf("enter array element");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             scanf("%d \t", &fdamt[i][j]);
//         }
//     }
//     disamount(fdamt, no);
//     return 0;
// }
// void disamount(int (*p)[2], int no)
// {
//     int i, j;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             printf("%d \t", *(*(p + i) + j));
//         }
//         printf("\n");
//     }
// }


//character using 2D array
#include<stdio.h>
void displayname(char[][20]);
int main()
{
    char name[5][20],i;
    printf("enter the name list:");
    for(i=0;i<5;i++)
    {
        gets(name[i]);
    }
    displayname(name);
    return 0;
}
void displayname(char n[][20])
{

        printf("\n you enter the name list is :%d");

        for(int i=0;i<5;i++)
    {
        puts(n[i]);
    }
}