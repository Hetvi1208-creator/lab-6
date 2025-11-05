#include<stdio.h>
int main()
{
    int i,n,max,min;
    printf("Enter 100 numbers : ");
    scanf("%d",&n);
    max=min=n;
    for(i=2;i<=100;i++)
    {
        scanf("%d",&n);
        if(n>max)
            max=n;
        if(n<min)
            min=n;
    }
    printf("Largest = %d\nSmallest = %d",max,min);
    return 0;
}
