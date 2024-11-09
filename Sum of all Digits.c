#include<stdio.h>
int main()
{
    int n,i,d,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        sum+=d;
        n/=10;
    }
    printf("%d",sum);
}