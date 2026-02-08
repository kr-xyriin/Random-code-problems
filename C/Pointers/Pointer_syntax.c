#include <stdio.h>
int main() {
    int age=22;
    int *p1=&age;
    int age_=*p1;
    printf("%d\n%d",p1, age_);
    return 0;
}