#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    int m=x*(x+1)/2;
    if(n>=m)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}