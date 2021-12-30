#include<stdio.h>
int odd(int i,int j)
{
	int k;
	for(k=i;k<=j;k++)
	{ if (k%2!=0)
	{printf("%d,",k);}}}
	
	int even(int i,int j)
	{
		int k;
		for(k=i;k<=j;k++)
		{if(k%2==0)
	    {printf("%d,",k);}}
}
int main()
{ int a,b,s;
printf("enter your range=");
scanf("%d%d",&a,&b);
even(a,b);
printf("\n");
odd(a,b);
}
