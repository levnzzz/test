#include<stdio.h>



int main()
{
    int cnt=0;
    int x;
    double sum=0;
    int n;
    scanf("%d",&n);
    int  a[n];
    scanf("%d",&x);
    while(x!=-1)
    {
        a[cnt]=x;
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }
    if(cnt>0)
    {
        int i;
        double average=sum/cnt;
        for(i=0;i<=cnt;i++)
        {
            if(a[i]>average)
                printf("%d",a[i]);
        }
    }
}
