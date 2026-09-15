#include <stdio.h>

int main()
{
    int num;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check whether the number is divisible by both 5 and 10
    if (num % 5 == 0 && num % 10 == 0)
    {
        printf("Number is divisible by 5 and 10");
    }
    else
    {
        printf("Number is not divisible by 5 and 10");
    }

    return 0;
}