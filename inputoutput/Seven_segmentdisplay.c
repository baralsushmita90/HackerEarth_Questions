#include<stdio.h>
int main()
{
	int N,max_number,ten,one,total_mat=0;
	printf("\nEnter the number");
	scanf("%d",&N);
	if(N<10)
	{
		switch(N)
		{
			
			case 0: total_mat=6;
			        break;
		    case 1: total_mat=2;
			        break;
		    case 2: total_mat=5;
			        break;
		    case 3: total_mat=5;
			        break;
			case 4: total_mat=4;
			        break;
			case 5: total_mat=5;
			        break;
			case 6: total_mat=6;
			        break;
			case 7: total_mat=3;
			        break;
			case 8: total_mat=7;
			        break;
			case 9: total_mat=6;
			        break;
		}
    
	
	if(total_mat==2)
	{
		max_number=1;
	}
	if(total_mat==3)
	{
		max_number=7;
	}
	if(total_mat==4)
	{
		max_number=11;
		
	}
	if(total_mat==5)
	{
		max_number=71;
	}
	if(total_mat==6)
	{
		max_number=111;
	}
	if(total_mat==7)
	{
		max_number=711;
	}
	printf("\nMax num from this is %d",max_number);
	
}
 if(N>=10)
 {
 	one=N%10;
 	ten=N/10;
 	switch(one)
		{
			
			case 0: total_mat+=6;
			        break;
		    case 1: total_mat+=2;
			        break;
		    case 2: total_mat+=5;
			        break;
		    case 3: total_mat+=5;
			        break;
			case 4: total_mat+=4;
			        break;
			case 5: total_mat+=5;
			        break;
			case 6: total_mat+=6;
			        break;
			case 7: total_mat+=3;
			        break;
			case 8: total_mat+=7;
			        break;
			case 9: total_mat+=6;
			        break;
		}
		switch(ten)
		{
			
			case 0: total_mat+=6;
			        break;
		    case 1: total_mat+=2;
			        break;
		    case 2: total_mat+=5;
			        break;
		    case 3: total_mat+=5;
			        break;
			case 4: total_mat+=4;
			        break;
			case 5: total_mat+=5;
			        break;
			case 6: total_mat+=6;
			        break;
			case 7: total_mat+=3;
			        break;
			case 8: total_mat+=7;
			        break;
			case 9: total_mat+=6;
			        break;
		}
 }
 printf("\nTotal number of matchsticks are %d",total_mat);
 	

 	
 	
 
	return 0;
}

