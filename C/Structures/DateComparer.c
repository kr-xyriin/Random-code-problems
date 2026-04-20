// Press [ALT + Z] to view the full question/comment

// Create a structure 'date' that contains three members namely date, month and year. Create 2 structure variables with different dates and now compare the two. If the dates are equal then display message as "Equal" otherwise "Unequal".

// Now create another structure variable by assigning the first date to it. Compare the first and third dates.

#include <stdio.h>

int main() {
    typedef struct Date{
        int date;
        int month;
        int year;
    } Date;
    Date d1, d2;

    d1.date=12;
    d1.month=12;
    d1.year=2012;

    d2.date=12;
    d2.month=12;
    d2.year=2011;

    if (d1.date==d2.date && d1.month==d2.month && d1.year==d2.year) printf("Equal\n");
    else printf("Un-equal\n");

    Date d3;
    d3=d1;

    if (d1.date==d3.date && d1.month==d3.month && d1.year==d3.year) printf("Equal\n");
    else printf("Un-equal\n");

    return 0;
}