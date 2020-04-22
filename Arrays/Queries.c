#include<stdio.h>
#include<math.h>
int main()
{
	long long int i,N,Q,first,k,second,j,l,third,num=0;
	long long int arr[100];
	printf("\nEnter the value of N and Q:");
	scanf("%lli %lli",&N,&Q);
	printf("\nEnter the binary numbers:");
	for(i=1;i<=N;i++)
	{
		scanf("%lli",&arr[i]);
	}
	printf("ENter the Queries:");
	for(i=1;i<=Q;i++)
	{
		printf("\nEnter Query %lli:",i);
		scanf("%lli",&first);
		if(first==1)
		scanf("%lli",&second);
		else
		{
			scanf("%lli",&second);
			scanf("%lli",&third);
			
		}
		if(first==1)
		{
			if(arr[second]==1)
			arr[second]=0;
			else
			arr[second]=1;
			printf("\nNew array after flip %lli position is:",second);
			for(l=1;l<=N;l++)
			{
				printf("%lli",arr[l]);
			}
		}
		else if(first==0)
		{   k=0;
			for(j=third;j>=second;j--)
			{
				num=num+arr[j]*(pow(2,k));
				k++;
				
			}
			printf("Number formed is %lli",num);
			if(num%2==0)
			{
				printf("\nEVEN");
			}
			else
			{
				printf("\nODD");
			}
		}
		
	}
	return 0;
}
