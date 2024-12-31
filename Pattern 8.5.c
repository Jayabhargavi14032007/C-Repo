#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char ch='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || j==n-i+1)
            {
                printf("%c",ch);
            }
            else
            {
                printf(" ");
            }
        }
        ch++;
        printf("\n");
    }
}