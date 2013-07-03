/****************************************************************************
 * array.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Computes a student's average across 2 quizzes.
 *
 * Demonstrates C's math library.
 ***************************************************************************/

#include <cs50.h>
#include <math.h>
#include <stdio.h>

// number of quizzes per term
#define QUIZZES 2

int main(void)
{
    // ask user for grades
    float grades[QUIZZES];
    printf("\nWhat were your quiz scores?\n\n");
    for (int i = 0; i < QUIZZES; i++)
    {
        printf("Quiz #%d of %d: ", i+1, QUIZZES);
        grades[i] = GetFloat();
    }

    // compute average
    float sum = 0;
    for (int i = 0; i < QUIZZES; i++)
        sum += grades[i];
    int average = (int) round(sum / QUIZZES);

    // report average
    printf("\nYour average is: %d\n\n", average);

    return 0;
}
