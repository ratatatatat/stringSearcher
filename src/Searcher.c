#include <string.h>
#include <stdio.h>

double mean(double a, double b) {
 	return (a+b) / 2;
}

int stringsize(char *sub){
	size_t size = strlen(sub);
	return size;
}

int scoreString(char *subString, char *mainString){
	int subSize = strlen(subString);
	int mainSize = strlen(mainString);
	char *dummyS[subSize + 1];
	memcpy(dummyS, &main[0], 4 );
	return &dummyS;
}