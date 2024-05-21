// The length and breadth of a rectangle and radius of a circle are
// input through the keyboard. Write a program to calculate the area
// and perimeter of the rectangle, and the area and circumference of
// the circle.


#include<stdio.h>

int main(){
    float l, b, r, aor, por, aoc, coc;
    printf("Enter length, breadth of rectangle and radius of circle: ");
    scanf("%f %f %f", &l, &b, &r);
    aor = l*b;
    por = 2 * (l+b);
    aoc = 3.14 * r * r;
    coc = 2 * 3.14 * r;
    printf("Area of rectangle: %f\n", aor);
    printf("Perimeter of rectangle: %f\n", por);
    printf("Area of circle: %f\n", aoc);
    printf("Circumference of circle: %f\n", coc);
    return 0;
}
