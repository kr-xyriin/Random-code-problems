#include <stdio.h>

typedef struct Owner{
    char firstname[30];
    char lastname[30];
} Owner;

typedef struct Car {
    char brand[30];
    char model[30];
    int year;
    Owner owner;
} Car;

int main() {
    Owner person={"John", "Doe"};
    Car toyota={"Toyota", "Supra", 2010, person};
    printf("Car: %s %s (%d)\n", toyota.brand, toyota.model, toyota.year);
    printf("Owner: %s %s\n", toyota.owner.firstname, toyota.owner.lastname);
    return 0;
}