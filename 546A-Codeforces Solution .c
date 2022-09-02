#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,m=0,sum=0,d;
    scanf("%d ",&a);
    scanf("%d ",&b);
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
        m=i*a;
        sum=sum+m;
    }
    d=abs(sum-b);
    if(b<sum)
        printf("%d",d);
    else
        printf("0");
}
