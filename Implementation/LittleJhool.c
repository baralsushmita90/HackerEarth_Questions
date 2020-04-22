#include<stdio.h>
int main()
{
	char N[100];
	int num,i,j,one=0,zero=0,count=0;
	scanf("%s",&N);
	printf("%s",N);
	for(i=0;N[i]!='\0';i++)
	{
		
		printf("\nN[%d]=%c",i,N[i]);
		if(N[i]=='1')
		{
			one++;
			printf("one=%d",one);
			if(one==6)
			{
				break;
			}
		}
		else  
	    one=0;
		
	}
	for(i=0;N[i]!='\0';i++)
	{
		printf("\nN[%d]=%c",i,N[i]);
		if(N[i]=='0')
		{
			zero++;
			printf("zero=%d",zero);
			if(zero==6)
			{
				break;
			}
		}
		else 
		zero=0; 
	
		
	}
	printf("one=%d",one);
	printf("zero=%d",zero);
	if(one==6||zero==6)
	{
		printf("\nSorry, sorry!");
	}
	else
	{
		printf("\nGood luck!");
	}


	return 0;
}
