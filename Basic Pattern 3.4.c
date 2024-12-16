#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char ch='A'+(n-1);
    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
                printf("%c ",ch);
        }
        ch--;
        printf("\n");
    }
}