/*
 *
 * Author: Artem Tsebrovskiy
 * Time:   Thu Feb 15 22:27:05 2018
 *
 * Implemented: boilerplate 'stack'
 * Big-O of solution:
 *   pop  - O(1)
 *   push - O(1) */

#include <stdio.h>
#include <stdlib.h>

#include "testing.h"

#define STACK_IMPL

int main(void) {
  structure_t* s = init_st(5);
  if (s == NULL) {
    return -1;
  }

  printf("%d\n", is_st_empty(s));
  free(s);
  return 0;
}

structure_t *init_st(int size) {
  structure_t *s = (struct HW_STRUCT*) malloc(sizeof(struct HW_STRUCT));
  if (s == NULL) {
    printf("I CANT:(");
    return NULL;
  }
  s->elems = size;

  return s;
}

void print_struct(structure_t* s) {
  printf("%d\n", s->elems);
}

int is_st_empty(structure_t* s) {
  return (s->elems == 0) ? 1 : 0;
}

node_t* pop(structure_t* s) {
  if (is_st_empty(s)) {
    printf("im empty :(");
    return NULL;
  }

  node_t* result = (struct HW_NODE*) malloc(sizeof(struct HW_NODE));
  if (result == NULL) {
    printf("I CANT :(");
    return NULL;
  }

  result->key = 1;
  printf("pop %d\n", result->key);
  return result;
}

void push(structure_t* s, node_t* e) {
  if (s->elems != 0) {
    printf("push %d\n", e->key);
  }
}

