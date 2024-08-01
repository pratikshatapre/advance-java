//rain fall for 7 days and calculate its average
#include<stdio.h>
int main()
{
    int days[7];
    int i,rainfall=0,avg=0;
    printf("\n enter the 7 days:\t");
    for(i=0;i<7;i++)
    {
        scanf("%d",&days[i]);
    }
    for(i=0;i<7;i++)
    {
        rainfall=rainfall+days[i];
    }
    avg=rainfall/7;
    printf("rainfall=%d",rainfall);
    printf("avg=%d",avg);
    return 0;
}