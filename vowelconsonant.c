// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("enter a value");
//     scanf("%d",&ch);
//     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
//     {
//         printf("\n it is a vowel");
//     }
//     else
//     {
//         printf("\n it is a consonants");
//     }
//     return 0;

// }

// total no. of vowel in string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10] = "pratiksha";
    int i, count = 0;
    printf("\n enter the string:");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'||
    str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }
    printf("total no.of vowel=%d", count);
    return 0;
}

