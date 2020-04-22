#include<stdio.h>
int main()
{
	int pages,length;
	scanf("%d",&length);
	scanf("%d",&pages);
	if(length<=23&&(pages>=500&&pages<=1000))
	{
		printf("\nTake Medicine");
		
	}
	else
	{
		printf("\nDon't take Medicine");
	}
	return 0;
}

