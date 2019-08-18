#include <stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
    int n,a[100],x,i,j,k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&x);
    for(i=0;i<n-2;i++)
    for(j=i+1;j<n-1;j++)
    for(k=j+1;k<n;j++)
    if(a[i]+a[j]+a[k]==x)
    {c=1;break;}
    if(c)
    printf("True");
    else
    printf("False");
    t--;
    }
}
