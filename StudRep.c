#include <stdio.h>

int main()
{
    int c, maths;

    // Input marks for C Programming
    printf("Enter C Programming marks: ");
    scanf("%d", &c);

    // Input marks for Mathematics
    printf("Enter Mathematics marks: ");
    scanf("%d", &maths);

    // Check whether the student has scored at least 40 in both subjects
    if (c >= 40 && maths >= 40)
    {
        printf("Student has passed both subjects");
    }
    else
    {
        printf("Student has not passed both subjects");
    }

    return 0;
}