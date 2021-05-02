/*
Write a C program to check whether a triangle can be formed by the given value for the angles.
  Test Data :
  40 55 65
  Expected Output :
  The triangle is not valid.
*/

#include<stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d%d",&A,&B,&C);
    if(A+B+C==180 && A>0 && B>0 && C>0)
    {
        printf("The triangle is valid.\n");
    }
    else
        printf("The triangle is not valid.\n");
    return 0;
}
