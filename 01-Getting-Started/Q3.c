// If the marks obtained by a student in five different subjects are input
// through the keyboard, write a program to find out the aggregate marks
// and percentage marks obtained by the student. Assume that the
// maximum marks that can be obtained by a student in each subject is
// 100.

#include<stdio.h>

int main(){
    int a, b, c, d, e, aggr;
    float percentage;
    printf("Enter marks in 5 subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    aggr = a+b+c+d+e;
    percentage = aggr/5;
    printf("Total marks: %d\n", aggr);
    printf("Total Percentage: %f\n", percentage);
    return 0;
}
