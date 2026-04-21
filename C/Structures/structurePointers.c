#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct pokemon{
    int hp;
    int speed;
    char name[50];
    int attack;
    char tier;
    int specialAttack;
} pokemon;

int main() {
    pokemon pikachu;
    pokemon *x=&pikachu;
    printf("%u\n", x);
    printf("%u\n", &pikachu.hp);
    printf("%u\n", &pikachu.speed);
    printf("%u\n", &pikachu.name);
    printf("%u\n", &pikachu.attack);
    printf("%u\n", &pikachu.tier);
    printf("%u\n", &pikachu.specialAttack);
    return 0;
}