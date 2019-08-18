#include <stdio.h>
#include<string.h>

main()
{
    int a[100][100],i,j,k,r,c;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    int min=a[0][0];
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    if(min>a[i][j])
    min=a[i][j];
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    if(a[i][j]==0)
    {for(k=0;k<r;k++)
    a[k][j]=min-1;
    for(k=0;k<c;k++)
    a[i][k]=min-1;}
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    if(a[i][j]==min-1)
    a[i][j]=0;
    for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
    printf("%d ",a[i][j]);
    printf("\n");}
}
