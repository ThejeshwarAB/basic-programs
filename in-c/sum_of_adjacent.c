//sourcecode
#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,a[100];
scanf("%d",&n);
int i=0;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
a[-1]=0;
a[n]=0;
for(i=0;i<n;i++)
printf("%d ",a[i-1]+a[i+1]);
}
//calculate adjacent number sum

/*
Sample IP:
5
1 2 3 4 5

Sample OP:
2 4 6 8 4
*/
