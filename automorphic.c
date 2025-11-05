#include<stdio.h>
int main()
{
    int n, sq, temp, p=1;
    printf("Enter number : ");
    scanf("%d", &n);
    temp = n;
    sq = n * n;
    while(temp != 0)
    {
        p = p * 10;
        temp = temp / 10;
    }
    if(sq % p == n)
        printf("Automorphic number");
    else
        printf("Not automorphic number");
    return 0;
}
