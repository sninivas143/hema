#include<stdio.h>
int main()
{
int n,i,a;
printf("enter the number");
scanf("%d",&n);
while(n%2==0)
{
n/=2;
}
printf("%d",n);
return 0;
}
