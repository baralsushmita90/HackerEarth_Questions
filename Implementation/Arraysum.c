#include<stdio.h>
int main()
{
	int i,N;
	long long int sum=0;
	long long int arr[10];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%lli",&arr[i]);
		sum=sum+arr[i];
	}
	printf("\n%lli",sum);
}
