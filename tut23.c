#include<stdio.h>

int main()
{
    int num,i,mul=0;
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
       mul=num*i;
       printf("%d * %d=%d \n",num,i,mul);
    }
    
}