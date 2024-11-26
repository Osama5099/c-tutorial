#include<stdio.h>
int main()
{
    int age,marks;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("Enter your marks\n");
    scanf("%d",&marks);
    switch (age)
    {
    case 1:
      printf("your age is 20\n");
      switch (marks)
       {
         case 2:
             printf("your marks are 35");
             break;
         default:
              printf("your marks are not 35");
       }
        break;
    case 4:
            printf("your age is 15");
            break;
    default:
            printf("your age is not 15");
        
    }
    return 0;
}
