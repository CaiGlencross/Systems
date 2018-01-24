/*
 * lists.c, a short linked list exercise for the C language lab in CS 105
 * 
 * <<Insert your names here!>>
 *
 */
#include <stdio.h>
#include <stdlib.h>

/* cell_t
 *    the type for a typical linked-list element with one
 *    integer
 */
typedef struct cell {
  int value;
  struct cell *next;
} cell_t;

/* makeempty
 *    frees all the elements in a list and makes the list empty
 */
void makeempty(cell_t** thelist) {

}

/* prepend
 *    creates a new element with the specified value
 *    and adds it to the front of the list
 */
void prepend(int newvalue, cell_t** thelist) {

}

/* append
 *    creates a new element with the specified value
 *    and adds it to the end of the list
 *
 * See the lab writeup for a complete line-by-line
 * description.
 */
void append(int newvalue, cell_t** thelist) {
  cell_t *newelt  = (cell_t*) malloc(sizeof(cell_t));
  newelt->value = newvalue;
  newelt->next = NULL;
  if (*thelist == NULL)
    *thelist = newelt;
  else {
    cell_t *p = *thelist;
    while (p->next != NULL)
      p = p->next;
    p->next = newelt;
  }
}

/* reverse
 *    rearranges the elements in a list so that they
 *    are in the opposite order
 */
void reverse(cell_t** thelist) {

}

/* printlist
 *    prints a title and then gives the value and location
 *    of each element in a list
 */
void printlist(char* title, cell_t* thelist) {
  cell_t *p;
  printf("%s\n", title);
  for (p = thelist; p != NULL; p = p->next)
    printf("%d, %p\n", p->value, p);
}

/* main
 *    demonstrates the functions above
 */
int main() {
  int j;
  cell_t *list = NULL;

  /* create a list of values from 9 down to 0;
   * print it; reverse it; print the reversal;
   * then make the list empty
   */
  for (j = 0; j < 10; j++)
    prepend(j, &list);
  printlist("backward", list);

  reverse(&list);
  printlist("backward reversed", list);

  makeempty(&list);
  printlist("empty", list);

  /* create a list of values from 0 up to 9;
   * print it; reverse it; print the reversal;
   * then make the list empty
   */
  for (j = 0; j < 10; j++)
    append(j, &list);
  printlist("forward", list);

  reverse(&list);
  printlist("forward reversed", list);

  makeempty(&list);
  printlist("empty again", list);

  return 0;
}
