/*write a c programme to convert the temperature from celcius to Fahrenheit using the formula-
F=(c*9/5) + 32*/
#include<stdio.h>
int main()
{
    float celcius, fahrenheit ; 
    printf("Enter the temperature (in celcius): ");
    scanf("%f", &celcius);
    fahrenheit = (celcius * 9/5) + 32;
    printf("Temperature in Fahrenheit is: %.1f", fahrenheit);
    return 0;
}