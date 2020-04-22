#include<stdio.h>
int main()
{
	char str[1000000];
	int i,n,h=0,a=0,c=0,k=0,e=0,r=0,t=0,hack_earth=0,j=0;
	scanf("%d",&n);
	scanf("%s",&str);
	for(i=0;i<n;i++)
	{
		if(str[i]=='h')
		h++;
		if(str[i]=='a')
		a++;
		if(str[i]=='c')
		c++;
		if(str[i]=='k')
		k++;
		if(str[i]=='e')
		e++;
		if(str[i]=='r')
		r++;
		if(str[i]=='t')
		t++;
			
	}
    while(h>=2&&a>=2&&c>=1&&k>=1&&e>=2&&r>=2&&t>=1)
    {
    	h=h-2;
    	a=a-2;
    	c=c-1;
    	k=k-1;
    	e=e-2;
    	r=r-2;
    	t=t-1;
    	j++;
    	
	}
	printf("\n%d",j);
	return 0;
	
	
}

