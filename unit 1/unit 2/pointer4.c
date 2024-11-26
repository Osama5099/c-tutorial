#include<stdio.h>
int main()
{
    int arr[]={4,2,3,6,1,2,8};
    printf("%d\n",&arr[0]);
    printf("%d\n",arr);
    printf("%d\n",&arr[1]);
    printf("%d\n",arr+1);
    printf("%d\n",(arr[0]));
    printf("%d\n",*arr);
    return 0;
}