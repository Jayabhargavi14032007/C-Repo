#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool self(int n)
{
    int flag=0,r1=n;
    while(n!=0)
    {
        int r=n%10;
        if(r==0 || r1%r!=0)
        {
            flag=1;
        }
        n=n/10;
    }
    if(flag==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a,b,i,r;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(self(i))
        {
            printf("%d ",i);
        }
    }
}