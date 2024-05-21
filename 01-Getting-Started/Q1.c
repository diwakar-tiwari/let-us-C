// Ramesh’s basic salary is input through the keyboard. His dearness
// allowance is 40% of basic salary, and house rent allowance is 20% of
// basic salary. Write a program to calculate his gross salary.

/* Calculate Ramesh’s gross salary */
# include <stdio.h>
int main( )
{
    float sal, da, hra, gSal;
    printf("Enter basic Salary: ");
    scanf("%f", &sal);
    da = 0.4 * sal;
    hra = 0.2 * sal;
    gSal = sal + da + hra;
    printf("Basic Salary: %f\n", sal);
    // cout<<"Dearness Allowance"<<da;
    printf("Dearness allowance: %f\n", da);
    printf("House rent allowance: %f\n", hra);
    printf("Gross Salary %f\n", gSal);
    return 0 ;
}