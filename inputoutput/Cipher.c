#include<stdio.h>
int main()
{
	char s[100];
	int i,k,key;
	printf("\nEnter the string");
	scanf("%s",&s);
	printf("\nEnter the key");
	scanf("%d",&key);
	k=key;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=97&&s[i]<=122)
		{
			 if(k>26)
			 {
			 	k=k%26;
			 }
		     if((s[i]+k)>122)
			 {
			 	s[i]=s[i]+k-26;
		   	 }	
			else
			s[i]=s[i]+k;
			
		}
		if(s[i]>=65&&s[i]<=90)
		{
			if(k>26)
			 {
			 	k=k%26;
			 }
		     if((s[i]+k)>90)
			 {
			 	s[i]=s[i]+k-26;
		   	 }	
		     
			else
			s[i]=s[i]+k;
			
		}
		if(s[i]>=48&&s[i]<=57)
		{
			if(key>10)
			 {
			 	key=key%10;
			 }
			if((s[i]+key)>57)
			s[i]=s[i]+key-10;
			else
			s[i]=s[i]+key;
		}
	}
	printf("%s",s);
	return 0;
}
