#include<stdio.h>
int check_alpha(int ch)
{
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    return 1;
    else
    return 0;
}
int check_prime(int a)
{   int i,count=0;
    printf("\nInside chck prime with %d",a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
		
	}
	if(count>2)
		return 0;
	else 
		return 1;
}
int search_prime(int a)
{   int add=a;
    int sub=a;
	printf("\nInside search prime");
    while(check_prime(add)!=1&&check_alpha(add)!=1)
    {
    	add++;
	}
	printf("\nIncremented Ascii value is %d",add);
	while(check_prime(sub)!=1&&check_alpha(sub)!=1)
    {
    	sub--;
	}
	printf("\nDecremented Ascii value is %d",sub);
	if(add>'Z'&&add<'a')
	{
		return sub;
	}
		if(add>'z')
	{
		return sub;
	}
	if((a-sub)==(add-a))
	{
		return sub;
	}
	else
	{
		if((a-sub)<(add-a))
		return sub;
		else
		return add;
   }
	  
	

}
int main()
{
	int T,N,i,a,flag=0;
	char str[500];
	printf("\nENter the number of test cases:");
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		printf("\nEnter the length of String:");
		scanf("%d",&N);
		printf("\nEnter String:");
		scanf("%s",&str);
		for(i=0;i<N;i++)
		{
			a=str[i];
			if((check_prime(a)==1)&&(check_alpha(a)==1))
			{
				flag=1;
			}
			if(flag==1)
			{
				printf("\nstr[%d] :%c has ascii value %d i.e  prime",i,str[i],str[i]);
			}
			else if(flag==0)
			{
				printf("\nstr[%d] :%c has ascii value %d i.e not prime so now we will search ",i,str[i],str[i]);
				str[i]=(char)(search_prime(a));
				printf("\nNew prime:%c",str[i]);
				
			}
			
		}
		printf("\n");
		for(i=0;i<N;i++)
		{
			printf("%c",str[i]);
		}
	}
}
