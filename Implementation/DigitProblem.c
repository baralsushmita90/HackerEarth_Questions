#include<stdio.h>
#include<math.h>
int main()
{
 long long int num,new_num,ten_power,up_num=0,k_new;
 int i,K,count=0,p=0,l=0;
 printf("\nEnter the number:");
 scanf("%lli",&num);
 printf("\nNUm :%lli",num);
 new_num=num;
 printf("\nNew num is %lli",new_num);
 printf("\nEnter the value of K: ");
 scanf("%d",&K);
 while(new_num>0)
 {
 	new_num=new_num/10;
 	count++;
 }
 printf("\nNumber of digits are %d",count);
 int arr[count];
 for(i=count-1;i>=0;i--)
 {
 	arr[i]=num%10;
 	num=num/10;
 	
 }
for(i=0;i<count;i++)
 { 
     
      if(arr[i]==9)
      {
         continue;
      }
      else
      {
        arr[i]=9;
        k_new++;
         if(k_new-1==K)
         {
     	   break;
	      }
     
      }
      
   }
 for(i=count-1;i>=0;i--)
 {
 	
 	ten_power=pow(10,p);
 	up_num=up_num+(arr[i]*ten_power);
 	p++;
 	
 }
 printf("\nRequired num is %lli",up_num);
 
 
 return 0;
 
}
