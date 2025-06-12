#include "stdio.h"
int sub(int a,int b)
{
    return (a-b);
}
int add(int a,int b)
{
    return (a+b);
}

void main()
{
    printf("hello world \r\n");
    printf("sub:%d \r\n",sub(5,3));
    printf("sub_dev_finish \r\n");
    printf("add:%d \r\n",add(2,3));
    printf("add_dev_finish \r\n");
}

