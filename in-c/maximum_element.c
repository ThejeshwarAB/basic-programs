//sourcecode
#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,i,a[1000],max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<n;i++)
    if(a[i]>max)
    max=a[i];
    printf("%d",max);
}
//maximum element

/*
Sample IP:
5
1 2 3 4 5 
 
Sample OP:
5
*/
