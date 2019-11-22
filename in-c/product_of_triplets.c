//sourcecode
#include<stdio.h>
#include<stdlib.h>
main()
{
int n,a[1000],i;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
a[n]=1;
a[n+1]=1;
for(i=0;i<n;i+=3)
printf("%d ",a[i]*a[i+1]*a[i+2]);
}
//product of three

/* 
Sample IP:
1 2 3 

Sample OP:
6
*/
