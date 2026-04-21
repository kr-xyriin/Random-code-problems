#include <stdio.h>
#include <string.h>

typedef struct pokemon{
    int hp;
    int speed;
    char name[50];
    int attack;
    char tier;
} pokemon;

void func(pokemon p) {
    printf("%d\n", p.attack);
    return;
}

void change(pokemon p) {
    p.hp=70;
    p.attack=60;
    p.speed=110;
}

int main() {
    pokemon pikachu;
    pikachu.attack=90;
    pikachu.hp = 60;
    pikachu.attack = 50;
    pikachu.speed = 100;
    // func(pikachu);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    return 0;
}