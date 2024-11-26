#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if (n%2==0)
    goto Even;
    else
    goto Odd;
    Even:
       printf("Even");
    Odd:
       printf("Odd");
    return 0;
}