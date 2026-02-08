// Simple program to print a string using the concept functions

#include <stdio.h>
void printer();    //function initialization 

void printer() {    //function body
    char printer[20];
    printf("Enter the statement to be printed: \n");
    scanf("%[^\n]", &printer);
    printf("%s", printer);
}
int main() {
    printer();      //function call
    return 0;
}