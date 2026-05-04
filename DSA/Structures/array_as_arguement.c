#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct point{
    int x;
    int y;
} point;

void print(point arr[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d | %d\n", arr[i].x, arr[i].y);
    }
} 

int main() {
    point arr[]={{1, 2}, {3, 4}};
    int size=sizeof(arr)/sizeof(arr[0]);
    print(arr, size);
    return 0;
}