#include<stdio.h>
int main()
{
	int i,T,j,k,seconds;
	long int N,K;
	printf("\nEnter the number of test cases:");
	scanf("%d",&T);
	for(j=0;j<T;j++)
	{
		seconds=0;
		printf("\nEnter the value of N and K:");
		scanf("%ld %ld",&N,&K);
		long int arr[N];
		for(i=0;i<N;i++)
		{
			scanf("%ld",&arr[i]);
		}
		    for(k=0;k<N;k++)
		    {
		      	while(arr[k]<K)
		     	{
			      	for(i=0;i<N;i++)
			    	{
				     	arr[i]=arr[i]+1;
				    
				    }
				    seconds++;
				    for(i=0;i<N;i++)
				    {
				    	printf(" %ld",arr[i]);
					}
			   }
		    }
		
		printf("\nSeconds:%d",seconds);
	}
}
