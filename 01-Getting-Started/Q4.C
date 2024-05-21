// Temperature of a city in Fahrenheit degrees is input through the
// keyboard. Write a program to convert this temperature into
// Centigrade degrees.

#include<stdio.h>

int main(){
    float tempF, tempC;
    printf("Enter temperature in Farenheit: ");
    scanf("%f", &tempF);
    tempC = (tempF - 32)*5/9;
    printf("Temperature in Centigrade: %f\n", tempC);
    return 0;
}