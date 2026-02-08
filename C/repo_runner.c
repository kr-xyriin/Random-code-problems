/* repo_runner.c
   Repo Runner - game built ONLY from typical small problems found in:
   - Random-code-problems
   - 100-Days-Coding-Challenge
   (examples in those repos: Temperature.c, Area_of_circle.c, Modulo_operator.c,
    Power_fn.c, SI.c, Increment_decrement.c)
   Compile: gcc -o repo_runner repo_runner.c -lm
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

#define BUF 128
void clear_line(){ int c; while((c=getchar())!='\n' && c!=EOF){} }

/* Helpers for puzzles — all use only basic arithmetic and control flow
   (same building blocks as the repo example files listed on your GitHub). */

/* parity using modulo (Modulo_operator.c) */
int parity_puzzle() {
    int n = rand()%201 - 100; // -100..100
    printf("Is %d even or odd? (1=Even, 2=Odd): ", n);
    int ans;
    if (scanf("%d", &ans)!=1) { clear_line(); return 0; }
    clear_line();
    int corr = (n % 2 == 0) ? 1 : 2;
    if (ans==corr) { printf("Correct!\n"); return 1; }
    printf("Wrong — %d is %s.\n", n, corr==1?"Even":"Odd"); return 0;
}

/* temperature conversion (Temperature.c) */
int temperature_puzzle() {
    int c = rand()%61 - 20; // -20..40
    double f = (c * 9.0 / 5.0) + 32.0;
    double fround = floor(f*10+0.5)/10.0;
    printf("Convert %d°C to Fahrenheit (rounded to 1 decimal). Enter like 72.5: ", c);
    double ans;
    if (scanf("%lf", &ans)!=1) { clear_line(); return 0; }
    clear_line();
    if (fabs(ans - fround) < 0.05) { printf("Correct!\n"); return 1; }
    printf("Wrong — correct is %.1f°F\n", fround); return 0;
}

/* area puzzles (Area_of_circle.c, Area_of_square.c) */
int area_puzzle() {
    if (rand()%2==0) {
        /* circle */
        int r = rand()%9 + 1; // 1..9
        double area = M_PI * r * r;
        double ar = floor(area*100+0.5)/100.0; // 2 decimals
        printf("Area of circle radius %d. Enter value rounded to 2 decimals: ", r);
        double ans;
        if (scanf("%lf", &ans)!=1) { clear_line(); return 0; }
        clear_line();
        if (fabs(ans - ar) < 0.005) { printf("Correct!\n"); return 1; }
        printf("Wrong — correct area ≈ %.2f\n", ar); return 0;
    } else {
        /* square */
        int s = rand()%12 + 1; // 1..12
        int area = s * s;
        printf("Area of square side %d. Enter integer value: ", s);
        int ans;
        if (scanf("%d", &ans)!=1) { clear_line(); return 0; }
        clear_line();
        if (ans == area) { printf("Correct!\n"); return 1; }
        printf("Wrong — correct area = %d\n", area); return 0;
    }
}

/* power function (Power_fn.c) — small integer power using loop */
long long int_pow(int base, int exp) {
    long long res = 1;
    for (int i=0;i<exp;++i) res *= base;
    return res;
}
int power_puzzle() {
    int base = rand()%6 + 2;  // 2..7
    int exp  = rand()%4 + 2;  // 2..5
    printf("Compute %d^%d (integer): ", base, exp);
    long long ans;
    if (scanf("%lld", &ans)!=1) { clear_line(); return 0; }
    clear_line();
    long long corr = int_pow(base, exp);
    if (ans == corr) { printf("Correct!\n"); return 1; }
    printf("Wrong — correct = %lld\n", corr); return 0;
}

/* simple interest (SI.c): SI = (P * R * T) / 100 */
int simple_interest_puzzle() {
    int P = (rand()%9 +1) * 100; // multiples of 100 between 100 and 900
    int R = rand()%10 + 1; // 1..10 percent
    int T = rand()%5 + 1;  // 1..5 years
    printf("Simple Interest for P=%d, R=%d%%, T=%d years. Enter integer SI: ", P,R,T);
    int ans;
    if (scanf("%d", &ans)!=1) { clear_line(); return 0; }
    clear_line();
    int corr = (P * R * T) / 100;
    if (ans == corr) { printf("Correct!\n"); return 1; }
    printf("Wrong — correct SI = %d\n", corr); return 0;
}

/* increment/decrement style reasoning (Increment_decrement.c) */
int incdec_puzzle() {
    int a = rand()%11 - 5; // -5..5
    int b = rand()%11 - 5;
    /* Show a tiny snippet in plain language so it's explainable:
       e.g. "int x = a; x++; x += b; what's x now?" - uses ++ and += logic */
    printf("Let x = %d; then x++; then x += %d; What is x now? Enter integer: ", a, b);
    int ans;
    if (scanf("%d", &ans)!=1) { clear_line(); return 0; }
    clear_line();
    int corr = a;
    corr = corr + 1; // x++
    corr = corr + b; // x += b
    if (ans == corr) { printf("Correct!\n"); return 1; }
    printf("Wrong — correct = %d\n", corr); return 0;
}

/* Game loop: monster/progress is very simple */
void play() {
    int player_hp = 30;
    int room = 0;
    int score = 0;
    char buf[BUF];

    printf("Repo Runner — puzzles directly from your repos.\n");
    printf("You start with %d HP. Solve puzzles to damage monsters.\nPress Enter to start...\n", player_hp);
    fgets(buf, sizeof(buf), stdin);

    while (player_hp > 0) {
        room++;
        int monster_hp = 8 + room*3;
        int monster_att = 3 + room/2;
        printf("\n--- Room %d ---\nMonster HP: %d  Monster attack: %d\n", room, monster_hp, monster_att);

        while (monster_hp > 0 && player_hp > 0) {
            printf("\nPlayer HP: %d   Monster HP: %d\n", player_hp, monster_hp);
            /* choose puzzle only from allowed set */
            int pick = rand()%6;
            int ok = 0;
            switch (pick) {
                case 0: ok = parity_puzzle(); break;
                case 1: ok = temperature_puzzle(); break;
                case 2: ok = area_puzzle(); break;
                case 3: ok = power_puzzle(); break;
                case 4: ok = simple_interest_puzzle(); break;
                case 5: ok = incdec_puzzle(); break;
            }
            if (ok) {
                int dmg = 4 + rand()% (room+1);
                monster_hp -= dmg;
                score += 10;
                printf("You dealt %d damage!\n", dmg);
                if (monster_hp < 0) monster_hp = 0;
            } else {
                int dmg = monster_att + rand()%3;
                player_hp -= dmg;
                printf("You took %d damage!\n", dmg);
                if (player_hp < 0) player_hp = 0;
            }
        }

        if (player_hp <= 0) {
            printf("\nYou were defeated in room %d. Final score: %d\n", room, score);
            break;
        } else {
            printf("\nMonster defeated! You clear room %d.\n", room);
            score += 20;
            printf("Continue? (1=Yes, 2=Quit): ");
            int ch;
            if (scanf("%d", &ch)!=1) { clear_line(); break; }
            clear_line();
            if (ch != 1) {
                printf("You quit after room %d. Final score: %d\n", room, score);
                break;
            }
            /* small heal between rooms (explainable as resting) */
            int heal = rand()%6 + 2;
            player_hp += heal;
            if (player_hp > 30) player_hp = 30;
            printf("You rest and recover %d HP (now %d).\n", heal, player_hp);
        }
    }
}

int main() {
    srand((unsigned)time(NULL));
    printf("===== Repo Runner =====\n");
    printf("This game uses only operations/examples you already have in your repos: modulo/parity, temperature conversion, area calcs, power loops, simple interest, increment/decrement.\n");
    printf("You can explain every puzzle by showing the relevant single-file examples in your repos.\n\n");
    play();
    return 0;
}