#include <stdio.h>

// argc is the number of argument chararacters there are?
// argv is the list of argument values (passed by reference) the program was initialized with
int main(int argc, char *argv[]) {

  int i = 0;

  // lets make out own array of strings
  char *states[] = {
    "California", "Oregon",
    "Washington", "Texas",
    argv[0],
  };

  // go through each string in argv
  // why am i skipping argv[0] => because argv[0] is the executable
  for (i = 1; i < argc; i++) {
    argv[2] = states[1];
    printf("arg %d: %s\n", i, argv[i]);
  }

  int num_states = 4;

  for (i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}
