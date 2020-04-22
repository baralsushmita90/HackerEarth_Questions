#include<stdio.h>
int main()
{
	int i,j,N,count=0;
	printf("\nEnter the Size of String:");
	scanf("%d",&N);
	char str[N];
	printf("\nEnter the String:");
	scanf("%s",&str);
	i=0;
	j=0;
	while(str[i]!='\0')
	{
	      if(str[i]==str[i+1])
           {
           	      for(j=0;str[j]!='\0';j++)
           	   {
           	   	          	   	   
           	   	
			   }
           }
		 i++;		  	
	}
	printf("\nNew String is:%s",str);
	return 0;
}
