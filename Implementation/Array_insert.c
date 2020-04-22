#include<stdio.h>
int main()
{
	int i,j,N,Q,f,s,t,sum;
	scanf("%d %d",&N,&Q);
	printf("N=%d and Q=%d",N,Q);
	int arr[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<Q;i++)
	{  sum=0;
		scanf("%d %d %d",&f,&s,&t);
		if(f==1)
		arr[s]=t;
		else if(f==2)
		{
			for(j=s;j<=t;j++)
			{
				sum=sum+arr[j];
			}
			printf("\n%d",sum);
		}
	}
	return 0;
	
}
