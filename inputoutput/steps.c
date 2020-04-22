#include<stdio.h>
int main()
{
     int x,rem_steps,steps=0;
	 scanf("%d",&x);
	 steps=x/5;
	 rem_steps=x%5;
	 if(rem_steps>0)
	 {
	 	steps=steps+1;
	 }
	 printf("\n%d",steps);
	 return 0;	
}
