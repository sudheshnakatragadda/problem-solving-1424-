#include<stdio.h>
	
	int main(){
		int a,b,s;
		printf("enter your numbers=");
		scanf("%d%d",&a , &b);
		sum(a,b);
	}
	int sum(int i,int j)
	{
		printf("sum= %d",i+j);
	}
