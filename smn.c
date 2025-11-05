#include<stdio.h>
int main()
{
    int i,n;
    float x,sum=0,mean;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter %d values : ",n);
    for(i=1;i<=n;i++)
    {
        scanf("%f",&x);
        sum+=x;
    }
    mean=sum/n;
    printf("Sum = %.2f\nMean = %.2f",sum,mean);
    return 0;
}
