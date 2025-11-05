#include<stdio.h>
int main()
{
    int i,boys=0,girls=0;
    char sex;
    printf("Enter sex code (M/F) for 50 students : ");
    for(i=1;i<=50;i++)
    {
        scanf(" %c",&sex);
        if(sex=='M' || sex=='m')
            boys++;
        else if(sex=='F' || sex=='f')
            girls++;
    }
    printf("Boys = %d\nGirls = %d",boys,girls);
    return 0;
}
