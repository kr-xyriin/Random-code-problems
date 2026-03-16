#include <stdio.h>

int main() {
    int arr0[5]; //declaration of array arr0
    // add values to the array using indexing
    arr0[0]=1;
    arr0[1]=3;
    arr0[2]=4;
    arr0[3]=10;
    arr0[4]=2;

    // int a[5]; // declaration of array a
    int arr1[5]={2,4,6,8,1}; //declaration and initialization of integer array of array arr
    
    /*Traverse through the array arr using for loop*/
    for (int i=0; i<5; i++) {
        printf("%d\n", arr1[i]);
    }
    printf("%d\n", arr1[2]); // print the value at 3rd index
    printf("\n");
    arr1[4]=100; // update the value of array
    printf("%d\n", arr1[4]);
    printf("\n");

    float arr2[3]={1.2, 3.4, 5.7}; //declaration and initialization of float array a
    printf("%.2f\n", arr2[0]); //print the value at 1st index
    printf("\n");

    char arr3[4]={'a', 'n', 'Y', '%'}; // declaration and initialization of a character array arr3
    printf("%c\n", arr3[3]); // print the value at 4th index of the array
    printf("\n");

    int arr4[4];
    // insert vslues in array using for loop
    for (int i=0; i<4; i++) {
        printf("Enter element number %d: ", i+1);
        scanf("%d", &arr4[i]);
    }
    
    // extract values from array using for loop
    for (int i=0; i<4; i++) {
        printf("%d\n", arr4[i]);
    }
    printf("\n");

    return 0;
}