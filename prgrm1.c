#include<stdio.h>
int main()
{
double n;
scanf("%lf",&n);
if(n<=0.0)
{
if(n==0.0)
printf("0");
else
printf("negative number");
}
else
printf("positive number");
return 0;
}
