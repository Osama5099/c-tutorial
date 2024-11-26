#include<stdio.h>
int main()
{
    int a='6';
    int* ptra=&a;
    printf("%d\n",ptra);
    printf("%d\n",ptra+1);
    printf("%d\n",ptra+2);
    printf("%d\n",ptra--);
    return 0;
}