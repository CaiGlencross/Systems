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
	char sentence[16];
	sentence = 'Cecil Sagehen';
	int* numbers = sentence;
	printf('%d %d %d %d', numbers[0], numbers[1], numbers[2], numbers[3]);

}