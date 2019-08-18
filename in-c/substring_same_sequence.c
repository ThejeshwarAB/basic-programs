#include <stdio.h>
#include<string.h>

main()
{
    int x;
    scanf("%d\n",&x);
    while(x)
    {
    int c=0,k=0;
    char ch,s[1000],a[1000];
    fgets(s,1000,stdin);
    fgets(a,1000,stdin);
    int m=strlen(a);
    int n=strlen(s);
    for(int i=0;i<m;i++)
    {
        ch=a[i];
        for(int j=k;j<n;j++)
        if(s[j]==ch)
        {
            c++;k=j+1;break;
        }
    }
    printf("Main:%sSub:%s",s,a);
    if(c==m)
    printf("True\n");
    else
    printf("False\n");
    x--;
    }
}
