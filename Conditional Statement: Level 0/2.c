/*
Write a C program to check whether a given number is positive or negative.
   Test Data : 15
   Expected Output :
   15 is a positive number
*/

#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is a positive number\n",num);
    }
    else if(num<0)
    {
        printf("%d is a negative number\n",num);
    }
    else
        printf("%d is neither a negative or a positive number\n",num);
    return 0;
}
