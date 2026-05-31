#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct charset{
    char c;
    int t;
} charset;

void keyValue(char *s, int *i) {
    scanf("%c %d", s, i);
}

int main() {
    charset ch;
    keyValue(&ch.c, &ch.t);
    printf("%c %d", ch.c, ch.t);
    return 0;
}