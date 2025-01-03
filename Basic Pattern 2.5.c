#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    char ch='A'+(n-1);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>=j)
            {
                printf("%c ",ch);
            }
        }
        ch--;
        printf("\n");
    }
}