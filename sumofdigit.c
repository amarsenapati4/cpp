#include<stdio.h>

int sumofdigit(int num)
{
    int r,sum=0;
    while(num>0)
    {
        r=num%10;
        num=num/10;
        sum+=r;
    }
   return sum;
}

int main(){
 int n;
 scanf("%d",&n);
 printf("sum of digit is=%d",sumofdigit(n));
}