#include <stdio.h>

int main()
{
    int age;

    // Ask the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check whether the person is eligible to vote
    if (age >= 18)
    {
        printf("Person is eligible to vote");
    }
    else
    {
        printf("Person is not eligible to vote");
    }

    return 0;
}