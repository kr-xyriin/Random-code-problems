/*
A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match.
Create an array of structure to hold records of 20 such cricketer and then write a program to read these records
*/

#include <stdio.h>
#include <string.h>

typedef float real;

int main() {
    typedef struct record {
        char firstname[15];
        char lastname[15];
        int age;
        int matches;
        real avg;
    } record;
    
    record arr[20];

    for(int i=0; i<20; i++) {
        printf("\nEnter details of cricketer [%d]:\n", i+1);
        printf("Enter first and last name: ");
        scanf("%s %s", arr[i].firstname, arr[i].lastname);
        printf("Enter age: ");
        scanf("%d", &arr[i].age);
        printf("Enter no. of matches: ");
        scanf("%d", &arr[i].matches);
        printf("Enter avg runs in lifetime: ");
        scanf("%f", arr[i].avg);
    }

    printf("\nDetails of the cricketers: \n\n");

    for (int i=0; i<20; i++) {
        printf("Details of cricketer [%d]: ", i+1);
        printf("Name: %s %s\n", arr[i].firstname, arr[i].lastname);
        printf("Age: %d\n", arr[i].age);
        printf("Matches played: %d\n", arr[i].matches);
        printf("Average runs: %.2f\n", arr[i].avg);
        printf("\n");
    }
    return 0;
}