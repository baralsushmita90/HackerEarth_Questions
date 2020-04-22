#include<stdio.h>
int main()
{
	char code[10];
    int i,temp,x,y,flag=0;

	for(i=0;i<9;i++)
	{
		scanf(" %c",&code[i]);
		
	}
	
	
	if(code[2]=='A'||code[2]=='E'||code[2]=='I'||code[2]=='O'||code[2]=='U'||code[2]=='Y')
	flag=1;
	if(code[6]!='-')
	flag=1;
	for(i=0;i<8;i++)
	{
	
		
			if(i==1||i==5)
			{
				i=i+2;
			}
			
			temp=code[i]+code[i+1];
			/*printf("\nvalue of temp:%d",temp);*/
			if(temp%2!=0)
			{
				flag=1;
				/*printf("\nFlag for even number check:%d",flag);*/
				break;
		   }
		
	}
	if(flag==0)
	printf("\nvalid");
	else 
	printf("invalid");
	return 0;
	
	
}
