// Press [ALT + Z] to view full question/comment

// Create a structure to specify data on students with these attributes: Roll number, Name, Department, Course, Year of joining. Create 2 structure variables. Now, create a function to check if two students have the same Department. Pass the two structure variable as input to this function.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct student{
    int rollNo;
    char name[50];
    char dep[20];
    char course[20];
    int yearofJoining;
} student;

void checker(student s1, student s2) {
    bool flag=true;
    if (strcmp(s1.dep, s2.dep)!=0) flag=false;
    if (flag) printf("Same dept.\n");
    else printf("Different dept.\n");
    return;
}

int main() {
    student s1, s2;
    strcpy(s1.dep, "Computer Science");
    strcpy(s2.dep, "Computer Science");
    checker(s1, s2);
    return 0;
}