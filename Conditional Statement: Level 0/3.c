/*
Write a C program to find whether a given year is a leap year or not.
  Test Data : 2016
  Expected Output :
  2016 is a leap year.
*/

#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year>1582 && year%400!=0 && year%100==0)
    {
        printf("%d is not a leap year\n",year);
    }
    else if(year>1582 && year%4==0)
    {
        printf("%d is a leap year\n",year);
    }
    else
        printf("%d is not a laeap year\n",year);
    return 0;
}


