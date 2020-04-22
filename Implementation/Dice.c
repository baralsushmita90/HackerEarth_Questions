#include<stdio.h>
int main()
{
	int i,count=0,flag=0;
	char str[100000];
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
        if(str[i]>='1'&&str[i]<='6')
        {
		      if(str[i]=='6')
		     {
		         continue;
	         }
		
		   count++;
	    }
	    else
	    flag=1;
	}
	if(flag==0)
	printf("\n%d",count);
	else if(flag==1)
	{
		printf("\n-1");
	}
	
	return 0;
}
