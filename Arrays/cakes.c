#include<stdio.h>
int main()
{
	long long int i,j,N,count=0;
	scanf("%lli",&N);
	long long int arr[N];
	for(i=0;i<N;i++)
	{
		scanf("%lli",&arr[i]);
	}
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(arr[i]==arr[j])
			arr[j]='@';
		}
	}

	for(i=0;i<N;i++)
	{
		
		if(arr[i]!='@')
		count++;
	}
	printf("\n%lli",count+1);
	return 0;
}
