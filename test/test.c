
/*
 * Professional Linux Programming - Trig Functions
 * Author: Jon Masters <jcm@jonmasters.org>
 */

#include <stdio.h>
#include <stdlib.h>
#include <Searcher.h>
#include <string.h>

#define MAX_INPUT 25

int main()
{
    printf("Starting Test Script\n");
    double a = 6.0;
    double b = 4.0;
    double avg;
    avg = mean(a,b);
    printf("Average: %f\n",avg);
    char sub[] = "Hello Word";
    char *s = &sub[0];
    size_t stringLength;
    stringLength = stringsize(s);
    printf("Character Length: %zu\n",stringLength);
    printf("This is the string: %s\n", s);
    printf("This is the subString: %s\n", s + 1);
    char buff[4];
    int copyLength = 3;
    for (int i = 0; i < (strlen(s) - copyLength); i++){
        strncpy(buff,sub + i, copyLength);
        printf("SubString: %s\n",buff);
    };
}
