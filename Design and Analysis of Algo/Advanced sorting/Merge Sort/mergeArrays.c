#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

void display(int sArr[], int size) {
    printf("[ ");
    for (int i=0; i<size; i++) printf("%d ", sArr[i]);
    printf("]\n");
    return;
}

void merger() {
    int sArr1[]={3,4,5,6,7,9}, sArr2[]={-4,0,2,3,9,10};
    int s1=sizeof(sArr1)/sizeof(sArr1[0]), s2=sizeof(sArr2)/sizeof(sArr2[0]);
    printf("Array 1:\n");
    display(sArr1, s1);
    printf("\n");
    printf("Array 2:\n");
    display(sArr2, s2);
    printf("\n");

    int sArr[s1+s2];
    int i=0, j=0, k=0;
    while (i<s1 && j<s2) {
        if (sArr1[i]<=sArr2[j]) {
            sArr[k]=sArr1[i];
            i++;
            k++;
        }
        else {
            sArr[k]=sArr2[j];
            j++;
            k++;
        }
    }

    while (i<s1) {
        sArr[k]=sArr1[i];
        i++;
        k++;
    }

    while (j<s2) {
        sArr[k]=sArr2[j];
        j++;
        k++;
    }

    printf("Combined sorted array: \n");
    display(sArr, s1+s2);
    return;
} 

int main() {
    merger();
    return 0;
}