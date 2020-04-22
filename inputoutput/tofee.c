#include<stdio.h>
int main()
{
	int i,days,x_gram,rad,tofee=0;
	double capacity,circum;
	printf("\nEnter number of days:");
	scanf("%d",&days);
	for(i=0;i<days;i++)
	{
			printf("\nEnter the radius and amount of horlicks:");
	        scanf("%d %d",&rad,&x_gram);
	        capacity=100*x_gram;
	        circum=(double)(2*(22/7)*rad);
	        if(capacity>=circum)
		   {
		   	  tofee++;
		   }
		
	}
	printf("\nNO of tofees=%d",tofee);
	return 0;
}
