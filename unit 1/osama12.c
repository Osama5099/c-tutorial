#include<stdio.h>
int print_sum(int a,int b)
{
    int c=a+b;
    return c;

}
int main()
{
    int c,a,b;
    print_sum(a,b);
    printf("Enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of b\n");
    scanf("%d",&b);
    c=a+b;
    printf("The sum is%d",c);
    return 0;
}
