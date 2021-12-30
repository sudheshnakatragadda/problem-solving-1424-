#include<stdio.h>
int sum()
{
	int i,j,s;
	printf("enter your numbers=");
	scanf("%d%d",&i,&j);
	s=i+j;
	return s;
}

int main(void)
{ int y;
  y=sum();
  printf("%d",y);
}

