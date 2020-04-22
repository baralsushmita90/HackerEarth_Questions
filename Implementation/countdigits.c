#include<stdio.h>
int main()
{
	char str[100];
	int i,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
	printf("\nEnter the String:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		switch(str[i])
		{
			case '0': zero++;
			          break;
			case '1': one++;
			          break;
			case '2': two++;
			          break;
			case '3': three++;
			          break;
			case '4': four++;
			          break;
			case '5': five++;
			          break;
			case '6': six++;
			          break;
			case '7': seven++;
			          break;
			case '8': eight++;
			          break;
			case '9': nine++;
			          break;
		}
	}
	printf("\n0 %d",zero);
	printf("\n1 %d",one);
	printf("\n2 %d",two);
	printf("\n3 %d",three);
	printf("\n4 %d",four);
	printf("\n5 %d",five);
	printf("\n6 %d",six);
	printf("\n7 %d",seven);
	printf("\n8 %d",eight);
	return 0;
}
