#include<stdio.h>
int main()
{
    char a='6';
    char* ptra=&a;
    printf("%d\n",ptra);
    printf("%d\n",ptra-1);
    printf("%d\n",ptra-2);
    return 0;
}