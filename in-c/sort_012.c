#include <stdio.h>

main()
{
    int a[100],b[100],mid,n,i,beg=0,end;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    end=n;
    for(i=0;i<n;i++)
    {if(a[i]==0)
    b[beg++]=0;
    if(a[i]==2)
    b[end--]=2;}
    for(i=beg;i<=end;i++)
    b[i]=1;
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
}

