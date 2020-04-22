#include<stdio.h>
int main()
{
	int i,length=0;
	char str[200000];
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=str[i+1])
		{
			length++;
		}
		else
		{
			length=0;
		}
	}
	printf("\n%d",length+1);
	return 0;
}
