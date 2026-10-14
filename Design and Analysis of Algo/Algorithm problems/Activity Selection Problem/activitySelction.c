#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct activity {
    int st;
    int et;
    int no;
} activity;

void merger (activity arr[], int si, int mi, int ei) {
    int s1=mi-si+1, s2=ei-mi;
    activity arr1[s1], arr2[s2];

    for (int p=0; p<s1; p++) arr1[p]=arr[p+si];
    for (int q=0; q<s2; q++) arr2[q]=arr[q+mi+1];

    int i=0, j=0, k=si;
    while (i<s1 && j<s2) {
        if (arr1[i].et<=arr2[j].et) {
            arr[k]=arr1[i];
            i++;
        } else {
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }

    while (i<s1) {
        arr[k]=arr1[i];
        i++, k++;
    }

    while (j<s2) {
        arr[k]=arr2[j];
        j++, k++;
    }
    
    return;
}

void mergeSort(activity arr[], int si, int ei) {
    if (si<ei) {
        int mid=(si+ei)/2;
        mergeSort(arr, si, mid);
        mergeSort(arr, mid+1, ei);
        merger(arr, si, mid, ei);
    }
    return;
}

void ActivitySelector(activity arr[], int n) {
    mergeSort(arr, 0, n-1);

    printf("Activities selected: \n\n");
    printf("Activity %d\n", arr[0].no);
    printf("Start: [%d] \nEnd: [%d]\n", arr[0].st, arr[0].et);
    printf("\n");

    int last=0;
    for (int i=1; i<n; i++) {
        if (arr[i].st>=arr[last].et) {
            printf("Activity %d\n", arr[i].no);
            printf("Start: [%d] \nEnd: [%d]\n", arr[i].st, arr[i].et);
            printf("\n");

            last=i;
        }
    }

    return;
}

int main() {
    int size;
    printf("Enter total no. of activities: ");
    scanf("%d", &size);

    activity arr[size];

    printf("\n");
    printf("Enter activites' details: \n");
    printf("\n");
    for (int i=0; i<size; i++) {
        arr[i].no=i+1;
        printf("Activity %d\n", arr[i].no);
        printf("Enter start time: ");
        scanf("%d", &arr[i].st);
        printf("Enter end time: ");
        scanf("%d", &arr[i].et);
        printf("\n");
    }
    printf("\n");

    printf("Given activities: \n\n");
    for (int i=0; i<size; i++) {
        printf("Activity %d\n", arr[i].no);
        printf("Start: [%d]\n", arr[i].st);
        printf("End: [%d]\n", arr[i].et);
        printf("\n");
    }
    printf("\n");

    ActivitySelector(arr, size);
    
    return 0;
}