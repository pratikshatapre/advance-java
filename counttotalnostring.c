// count the total no. of word in string
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100
int main()
{
  char str[20];
  int i, wrd;
  printf("\n \n count the total number of word in  a string:\n");
  printf("------------------\n");
  printf("input the string:");
  gets(str);
  i = 0;
  wrd = 1;
  while (str[i] != '\0')
  {
    if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
    {
      wrd++;
    }
    i++;
  }
  printf("\n total number of word in the string is %d:", wrd);
  return 0;
}

// //copy one string to another string
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[10],s2[10];
//     int i;
//     printf("enter a string:");
//     gets(s1);
//     for(i=0;s1[i]!='\0';i++)
//     {

//         s2[i]=s1[i];
//     }
//     s2[i]='\0';
//     printf("string=%s",s2);
//     return 0;
// }