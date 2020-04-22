#include<stdio.h>
int main()
{
	int A[1000000000];
	int i,N,last_digit;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("\n%d",&A[i]);
	}
	last_digit=A[N-1]%10;
	if(last_digit==0)
	printf("\nYES");
	else
	printf("\nNo");
	return 0;
	
}
