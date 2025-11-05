#include<stdio.h>
int main()
{
    int i,n,pos=0,neg=0,zero=0;
    printf("Enter 200 values : ");
    for(i=1;i<=200;i++)
    {
        scanf("%d",&n);
        if(n>0)
            pos++;
        else if(n<0)
            neg++;
        else
            zero++;
    }
    printf("+ve = %d\n-ve = %d\nZero = %d",pos,neg,zero);
    return 0;
}
