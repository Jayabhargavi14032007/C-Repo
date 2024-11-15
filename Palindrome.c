#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(t==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}