#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year:-");
    scanf("%d",&year);
    if(year%400==0 ||(year%4==0 && year%100!=0))
    {
        printf("The entered year is a leap year:%d",year);
    }
    else
    {
        printf("The given year is not a leap year:%d",year);
    }
    return(0);
}
