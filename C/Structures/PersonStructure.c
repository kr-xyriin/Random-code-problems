// Create a structure type 'Person' with name, salary and age as its attributes. Declare and initialize 2 variables for this. Print the name of first person and age of the other.

#include <stdio.h>
#include <string.h>

int main() {
    struct person{
        char name[50];
        float salary;
        int age;
    } p1;
    struct person p2;
    strcpy(p1.name, "Aayush");
    printf("%s\n", p1.name);
    p2.age=16;
    printf("%d\n", p2.age);
    return 0;
}