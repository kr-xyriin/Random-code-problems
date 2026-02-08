// Program to write two Functions for hello & goodbye respectively

#include <stdio.h>
void hello();
void bye();
int main() {
    char choice;
    printf("Hello [h] or GoodBye [g] ?: ");
    scanf("%c", &choice);
    if (choice=='h') {
        hello();
    } else if (choice=='g') {
        bye();
    } else {printf("Invalid choice!!");}
    return 0;
}
void hello() {
    printf("HELLO\n");
}
void bye() {
    printf("BYE\n");
}