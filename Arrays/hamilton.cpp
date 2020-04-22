#include<stdio.h>
int main()
{
	int i,N,j,flag;
	/*printf("\nEnter the number of students:");*/
	scanf("%d",&N);
	int marks[N];
	/*printf("\nEnter the marks of students:");*/
	for(i=0;i<N;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<N;i++)
	{
	     flag=0;
	     for(j=i+1;j<N;j++)
	     {
	     	if(marks[i]<marks[j])
	     	{
	     		flag=1;
	     		break;
			}
	     
	     }
	     
	     if(flag==0)
	     {
	     	printf(" %d",marks[i]);
		 }
		 
		 
	}
	return 0;
}
