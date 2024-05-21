// The distance between two cities (in kilometers) is input through the
// keyboard. Write a program to convert and print this distance in meters,
// feet, inches and centimeters.


#include<stdio.h>

int main(){
    float km, m, ft, in, cm;
    printf("Enter distance b/w two cities in kilometers: ");
    scanf("%f", &km);
    m = km * 1000;
    cm = m * 100;
    in = cm / 2.54;
    ft = in / 12;
    printf ("Distance in meters = %f\n", m ) ;
    printf ("Distance in centimeter = %f\n", cm ) ;
    printf ("Distance in feet = %f\n", ft ) ;
    printf("Distance in inch: %f\n", in);
    return 0;
}