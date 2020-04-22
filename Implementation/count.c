#include<stdio.h>
int main()
{
int num,count=0;
scanf("\n%d",&num);
while(num>0)
{
	num=num/10;
	count++;
}
printf("\n%d",count);
return 0;
}
