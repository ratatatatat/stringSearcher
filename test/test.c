
/*
 * Professional Linux Programming - Trig Functions
 * Author: Jon Masters <jcm@jonmasters.org>
 */

#include <stdio.h>
#include <stdlib.h>
#include <Searcher.h>

#define MAX_INPUT 25

int main()
{
    printf("Starting Test Script\n");
    double a = 6.0;
    double b = 4.0;
    double avg;
    avg = mean(a,b);
    printf("Average: %f\n",avg);
    char s[11] = "Hello Word";
    int stringLength;
    stringLength = stringsize(&s);
    printf("Character Length: %d",stringLength);
}
