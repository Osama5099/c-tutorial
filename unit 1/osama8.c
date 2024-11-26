#include<stdio.h>
int main()
{
    int age ,marks;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("Enter your marks\n");
    scanf("%d",marks);
    switch (age)
    {
     case 20:
        printf("your age is 20 year\n");
        switch (marks)
        {
          case 4:
            printf("your marks is 4");
            break;
          default: 
            printf("your marks is not 4");
        }
        break;
     case 30:
        printf("your age is 30 year\n");
        break;
     case 40:
        printf("your age is 40 year\n");
        break;
     default:
        printf("your age is not 20.30.40");
        break;
    }
    return 0;
}
