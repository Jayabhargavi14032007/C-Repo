#include<stdio.h>
int main()
{
    int n,i,f,l;
    scanf("%d",&n);
    l=n%10;
    f=n;
    while(f>=10)
    {
        f/=10;
    }
    int sum=f+l;
    printf("%d",sum);
}