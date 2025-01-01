#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1=s1+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
           s2=s2+a[i]; 
        }
    }
    int x=s2-s1;
    if(x<0)
    {
        printf("%d",s1-s2);
    }
    else
    {
        printf("%d",x);
    }
}