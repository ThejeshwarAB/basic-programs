#include <stdio.h>

main()
{
    int n,a[100];
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        int max=a[i+1];
        for(j=i+1;j<n;j++)
        if(max<a[j])
        {
            max=a[j];
        }
        printf("%d ",max);
    }
}

