#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,w;
    scanf("%d %d",&a,&b);
    int q=pow(2,b);
    w=q;
    for(int i=1;i<=a;i++)
    {
        if(w%2==0)
        {
            w=w/2;
            if(w<=0)
            {
                break;
            }
        }
        else
        {
            w=(w/2)+1;
            if(w<=0)
            {
                break;
            }
        }
    }
    if(w>=0)
    {
        printf("%d",w);
    }
    else{
        printf("0");
    }
}