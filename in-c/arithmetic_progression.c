//sourcecode
#include<stdio.h>
#include<stdlib.h>
main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
while(c)
{
    printf("%d ",a);
    a+=b;
    c--;
}
}
//a is first element
//b is common diff
//c is count no

/*
Sample IP:
1 2 4 

Sample OP:
1 3 5 7
*/
