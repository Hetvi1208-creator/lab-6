#include<stdio.h>
int main()
{
    int n, temp, d, sum=0;
    printf("Enter number : ");
    scanf("%d", &n);
    temp = n;
    while(n != 0)
    {
        d = n % 10;
        sum = sum + (d*d*d);
        n = n / 10;
    }
    if(sum == temp)
        printf("Armstrong number");
    else
        printf("Not armstrong number");
    return 0;
}
