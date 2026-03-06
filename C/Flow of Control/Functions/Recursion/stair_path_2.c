// we need to go to nth stair using 1 or 2 or 3 steps
// Find the total number of ways to achieve those steps

#include <stdio.h>

int stairway(int n);

int main()
{
    int num;
    printf("Enter number of stairs: ");
    scanf("%d", &num);
    printf("Number of ways: %d\n", stairway(num));
    return 0;
}

int stairway(int n) {
    if (n<=3) return n;
    return stairway(n-1) + stairway(n-2) + stairway(n-3);
}