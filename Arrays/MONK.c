#include<stdio.h>
int main()
{
	int i;
    int N;
	printf("\nEnter the size of array A and B:");
	scanf("%ld",&N);
	long int A[N];
	long int B[N];
	long int C[N];
	printf("\n");
	for(i=0;i<N;i++)
	{
		scanf("%ld",&A[i]);
	}
	for(i=0;i<N;i++)
	{
		scanf("%ld",&B[i]);
	}
	for(i=0;i<N;i++)
	{
		C[i]=A[i]+B[i];
		
	}
	for(i=0;i<N;i++)
	{
		printf("%ld",C[i]);
	}
	return 0;
	
}
