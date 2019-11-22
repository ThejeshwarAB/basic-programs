//sourcecode
#include<stdio.h>
#include<stdlib.h>
main()
{
int n;
int i,a[1000];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
a[n]=0;
for(i=0;i<n;i+=2)
printf("%d ",a[i]+a[i+1]);
}
//sum of pairs

/*
Sample IP:
6
1 1 2 2 3 3

Sample OP:
2 4 6 
*/
