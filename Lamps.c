#include<stdio.h>
int main()
{
int x,y,n,k;
scanf("%d%d%d%d",&x,&y,&n,&k);
int min=k*x+(n-k)*y;
int min1=k*x+(n-k)*x;
if(min<min1)
{
    printf("%d",min);
}
else
{
    printf("%d",min1);
}
}