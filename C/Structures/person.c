// Create a structure 'person' having attributes as age and weight. Access its structure variables using pointers.
#include <stdio.h>

typedef struct person{
    int age;
    float weight;
} person;

int main() {
    person p1;
    person *l1=&p1;
    (*l1).age=19;
    l1->weight=76;
    printf("Age: %d\n", l1->age);
    printf("Weight: %.1f\n", l1->weight);
    return 0;
}