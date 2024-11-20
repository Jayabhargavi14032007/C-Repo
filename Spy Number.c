#include<stdio.h>
int main()
{
    int n,sum=0,product=1,d;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum+=d;
        product*=d;
        n/=10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}