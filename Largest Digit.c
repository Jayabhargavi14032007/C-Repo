#include<stdio.h>
int main()
{
    int n,ld=0,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(rem>ld)
        {
            ld=rem;
        }
        n=n/10;
    }
    printf("%d",ld);
}