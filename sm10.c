#include<stdio.h>
int main()
{
    int i;
    float x,sum=0,mean;
    printf("Enter 10 values : ");
    for(i=1;i<=10;i++)
    {
        scanf("%f",&x);
        sum+=x;
    }
    mean=sum/10;
    printf("Sum = %.2f\nMean = %.2f",sum,mean);
    return 0;
}
