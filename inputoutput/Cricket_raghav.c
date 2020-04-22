#include<stdio.h>
int main()
{
	int t1,t2,t3,max;
	printf("\nEnter the values for t1 t2 and t3:");
	scanf("%d %d %d",&t1,&t2,&t3);
	max=t1;
	if(t2>t1)
	{
		max=t2;
	}
	if(t3>max)
	{
		max=t3;
	}
	printf("\n%d",max);
	return 0;
}
