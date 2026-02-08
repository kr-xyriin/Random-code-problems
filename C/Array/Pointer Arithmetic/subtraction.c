#include <stdio.h>
int main() {
    // int *p1, *p2, *p3, *p4;
    int v1, v2, v3, v4;
    v1=22, v2=23, v3=221, v4=10;
    int *p1=&v1, *p2=&v2, *p3=&v3, *p4=&v4;
    // printf("v1=%u\nv2=%u\nv3=%u\nv4=%u",*p1, *p2, *p3, *p4);
    printf("v1=%u\nv2=%u\nv3=%u\nv4=%u\n", p1, p2, p3, p4);
    printf("Difference [v2-v1]: %u\n", p1-p2);
    printf("Difference [v3-v1]: %u\n", p1-p3);
    printf("Difference [v3-v4]: %u\n", p3-p4);
}