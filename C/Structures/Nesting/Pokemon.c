#include <stdio.h>
#include <string.h>

int main() {
    typedef struct pokemon{
        char name[50];
        int speed;
        int attack;
        int hp;
        char tier;
    } pokemon;

    typedef struct legendaryPokemon{
        pokemon normal;
        char ability[20];
    } legendary;

    typedef struct godPokemon {
        legendary legend;
        int specialAttack;
    } god;

    legendary mewTwo;
    strcpy(mewTwo.normal.name, "MewTwo");
    mewTwo.normal.attack=300;
    mewTwo.normal.hp=150;
    mewTwo.normal.speed=120;
    mewTwo.normal.tier='S';
    strcpy(mewTwo.ability, "Pressure");

    god arceus;
    strcpy(arceus.legend.normal.name, "Arceus");
    arceus.legend.normal.attack=1000;
    arceus.legend.normal.hp=560;
    arceus.legend.normal.speed=2000;
    arceus.legend.normal.tier='G';
    strcpy(arceus.legend.ability, "Teleportation");
    arceus.specialAttack=2500;

    printf("%d\n", mewTwo.normal.attack);
    printf("%s\n", mewTwo.ability);
    printf("\n");
    printf("%s\n", arceus.legend.normal.name);
    printf("%d\n", arceus.legend.normal.attack);
    printf("%d\n", arceus.legend.normal.hp);
    printf("%d\n", arceus.legend.normal.speed);
    printf("%c\n", arceus.legend.normal.tier);
    printf("%s\n", arceus.legend.ability);
    printf("%d\n", arceus.specialAttack);

    return 0;
}