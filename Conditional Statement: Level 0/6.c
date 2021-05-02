/*
Write a C program to read temperature in centigrade and display a suitable message according to temperature state below :
  Temp < 0 then Freezing weather
  Temp 0-10 then Very Cold weather
  Temp 10-20 then Cold weather
  Temp 20-30 then Normal in Temp
  Temp 30-40 then Its Hot
  Temp >=40 then Its Very Hot
  Test Data :
  42
  Expected Output :
  Its very hot.
*/

#include<stdio.h>
int main()
{
    float Temp;
    scanf("%f", &Temp);
    if(Temp<0)
    {
        printf("Freezing weather.\n");
    }
    else if(Temp>=0 && Temp<10)
    {
        printf("Very Cold weather.\n");
    }
    else if(Temp>=10 && Temp <20)
    {
        printf("Cold weather.\n");
    }
    else if(Temp>=20 && Temp<30)
    {
        printf("Normal in Temp.\n");
    }
    else if(Temp>=30 && Temp<40)
    {
        printf("Its Hot.\n");
    }
    else
        printf("Its Very Hot.\n");

    return 0;
}
