#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *p;
    char s[8]="hello! ";
    int *q;
    int a[2]={1819043176};
    p=(char*)a;
    *(p+4)='o';
    *(p+5)='@';
    *(p+6)='0';
    q=(int *)s;
    printf("%d  %d\n",*q,*(q+1));
    printf("%s\n",p);
    printf("%x  %x  %x\n",s,q,p);
    return 0;
}
