#include <stdio.h>
#include <string.h>

int main() {
    char s1[20]="YOYII", s2[20]="YOYII";
    if (strcmp(s1, s2)==0) printf("True...\n");
    else printf("False");
    return 0;
}