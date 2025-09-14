//Program to check for ARMSTRONG number
//ARMSTRONG Number: A number that is equal to the sum of cubes of its digits

#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, sum, rem;
    sum=rem=0;
    printf("Enter the number [10 - 9999] to be checked: ");
    scanf("%d", &num);
    if (num>=10 && num <=9999) {
        if (num<100){
            temp = num;
            rem=temp%10;
            sum=sum+pow(rem,3);
            temp/=10;
            rem=temp%10;
            sum=sum+pow(rem,3);
            if (sum == num) {
                printf("%d is an Armstrong number\n", num);
            } else {
                printf("%d is not an Armstrong number\n", num);
            }
        } else if (num >= 100 && num <=999) {
            temp = num;
            rem=temp%10;
            sum=sum+pow(rem,3);
            temp/=10;
            rem=temp%10;
            sum=sum+pow(rem,3);
            temp/=10;
            rem=temp%10;
            sum=sum+pow(rem,3);
            if (sum == num) {
                printf("%d is an Armstrong number\n", num);
            } else {
                printf("%d is not an Armstrong number\n", num);
            }
        } else {
            temp = num;
            rem=temp%10;
            sum=sum+pow(rem,4);
            temp/=10;
            rem=temp%10;
            sum=sum+pow(rem,4);
            temp/=10;
            rem=temp%10;
            sum=sum+pow(rem,4);
            temp/=10;
            rem=temp%10;
            sum=sum+pow(rem,4);
            if (sum == num) {
                printf("%d is an Armstrong number\n", num);
            } else {
                printf("%d is not an Armstrong number\n", num);
        }
        }
    } else {
        printf("Input out of range!\n");
    }
    return 0;
}