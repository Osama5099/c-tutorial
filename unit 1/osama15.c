#include<stdio.h>

int factorial(int number)
{
    if(number==0||number==1)
    {
        return 1;
    }
    else{
        return(number * factorial(number-1));
    }
}
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("factorial %d is %d\n",num,factorial(num));
    return 0;
}
