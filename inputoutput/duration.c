#include<stdio.h>
int main()
{
	int i,work,sh,sm,eh,em;
	printf("\nEnter number of work:");
	scanf("%d",&work);
	for(i=0;i<work;i++)
	{
		printf("\nEnter the starting hour and starting minute:");
		scanf("%d %d",&sh,&sm);
		printf("\nEnter the Ending hour and Endin minute: ");
		scanf("%d %d",&eh,&em);
		if(sm>em)
		{
			printf("\n%d   %d",eh-sh-1,60-sm+em);
		
		}	
		else
		{
			printf("\n%d   %d",eh-sh,em-sm);
		}
	}
	return 0;
}
