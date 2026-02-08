/*
Q1. Chef is working on a simple security checker for numeric PIN codes. He believes that
PINs containing very low digits (like 0 or 1) are weaker and more predictable.
[10 marks]
Chef wants to identify the weakest digit in a given PIN code, which is defined as
the smallest digit present in the number.
To do this, he asks you to write a program that:
• Takes a multi-digit integer N as input.
• Uses a while loop to process each digit of the number.
• Uses an if condition to keep track of the smallest digit encountered.
Input Format
• A single integer N, where N is a multi-digit positive number.
Output Format
• Print the smallest digit present in the integer N.
Input
6194
Output
1
*/

// #include <stdio.h>
// int main() {
//     int pin, min=9, rem, temp;
//     printf("Enter pin code: ");
//     scanf("%d", &pin);
//     temp=pin;
//     while (temp!=0) {
//         rem=temp%10;
//         if (rem<min) {
//             min=rem;
//         }
//         temp/=10;
//     } printf("Smallest digit is: %d\n", min);
//     return 0;
// }

/*
Q2. Consider the following C code snippet. The goal is to extract the substring "World" from
the string "Hello World" and print it. However, there might be a subtle bug in the code.
[5 marks]
#include <stdio.h>
int main() {
char source[] = "Hello World";
char substring[10];
int start = 6; int length = 5; int i, j = 0;
for (i = start; i < start + length; i++) {
substring[j] = source[i];
j++;
}
printf("%s", substring);
return 0;
}
Analyze the code carefully. What will be the most likely output when this program is
compiled and run?
*/
// #

#include <stdio.h>
#include <ctype.h>  // For isdigit()

int main() {
    char message[100];
    char digits[100];
    int i = 0, j = 0;

    // Read the alphanumeric string
    printf("Enter message: ");
    scanf("%s", message);

    // Extract digits
    while (message[i] != '\0') {
        if (isdigit(message[i])) {
            digits[j] = message[i];
            j++;
        }
        i++;
    }
    digits[j] = '\0'; // Null-terminate the digit string

    // Convert digits string to integer
    int code = 0;
    i = 0;
    while (digits[i] != '\0') {
        code = code * 10 + (digits[i] - '0');
        i++;
    }

    // Multiply by 2
    code = code * 2;

    // Print final secret code
    printf("%d\n", code);

    return 0;
}
