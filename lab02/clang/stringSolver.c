/* 
 * stringSolver.c, a program for the C language lab
 * in CS 105
 *
 * Cai Glencross & Jeff Carney
 * Pomona College
 * May 18, 2017
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_INTS 6

int main() {
	char* sentence = "Cecil Sagehen";
	int* numbers = NULL;
	numbers = (int*) sentence;
	printf("%d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

	double pi = 3.1415926535897931;
	double* piptr = &pi;
	int* numbersptr = (int*) piptr;
	printf("%d %d\n", numbersptr[0], numbersptr[1]);



}