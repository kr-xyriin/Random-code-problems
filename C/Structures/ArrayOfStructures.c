// create an array of structures

#include <stdio.h>
#include <strings.h>

int main() {
    typedef struct poekmon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[50];
    } pokemon;
    // pokemon pikachu;
    // pokemon charizard;
    pokemon arr[3];
    
    for (int i=0; i<3; i++) {
        printf("\nEnter details for pokemon %d:\n", i+1);
        printf("Enter name: ");
        strcpy(arr[i].name, gets(arr[i].name));
        printf("Enter hp: ");
        scanf("%d", &arr[i].hp);
        printf("Enter speed: ");
        scanf("%d", &arr[i].speed);
        printf("Enter attack: ");
        scanf("%d", &arr[i].attack);
        printf("Enter tier: ");
        scanf("%c", &arr[i].tier);
    }
    printf("Printing the array....\n");
    for (int i=0; i<3; i++) {
        printf("Pokemon %d:\n", i+1);
        printf("Name: %s", arr[i].name);
        printf("HP: %d", arr[i].hp);
        printf("Name: %d", arr[i].attack);
        printf("Name: %d", arr[i].speed);
        printf("Name: %c", arr[i].tier);
        printf("\n");
    }
    return 0;
}