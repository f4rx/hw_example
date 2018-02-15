#include <stdio.h>
#include <stdlib.h>

void do_something(int i);

// ./progname inputfile
int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Not enough args. Should be: ./progname inputfile\n");
    return -1;
  }

  FILE* in = fopen(argv[1], "r");

  // Amount of elements
  unsigned int n = 0;
  fscanf(in, "%d", &n);

  int data[n];

  for (int i = 0; i < n; i++) {
    fscanf(in, "%d", data+i);
  }

  for (int i = 0; i < n; i++) {
    do_something(data[i]);
  }

  fclose(in);
  return 0;
}

void do_something(int i) {
  printf("Doing something with %d\n", i);
}
