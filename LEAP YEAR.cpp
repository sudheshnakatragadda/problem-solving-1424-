#include<stdio.h>
int main()
{
    int y;
    printf("enter the year");
    scanf("%d",&y);
    if (y%4==0)
    { printf("the year is a leap year");
    }
    else{
        printf("the year is not a leap year");
    }
    return 0;
}
