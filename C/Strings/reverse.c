#include <stdio.h>
#include <strings.h>

int main() {
    char str[50];
    printf("Input a string: ");
    scanf("%[^\n]s", str);
    // puts(str);
    // gets(str);
    int size=0;
    for (int i=0; str[i]!='\0'; i++) size++;
    // printf("%d\n", size);
    puts("Reversed string: ");
    for (int i=0, j=size-1; i<=j; i++, j--) {
        // printf("%c", str[i]);
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);
    // printf("%c\n", strReversed[1]);

    // char tester[5]={'\0', 'h', 'o', 'l', 'a'};
    // puts(tester);
    // return 0;
}