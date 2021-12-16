#include<stdio.h>
int main()
{
	int number, sum=0,i=1;
	printf("enter a number");
	scanf("%d",&number);
	while(i<number)
	{ 
	if(number%i==0)
	{ sum=sum+i;
    }
    i++;
    }
    if(sum==number)
    printf("entered number is a perfect number");
    else
    printf("entered number is not a perfect number");
	return 0;
}
	
