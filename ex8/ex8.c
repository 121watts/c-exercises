#include <stdio.h>

int main(int argc, char *argv[]) {
  int default_arg = 1;

  if (argc == default_arg + 1) {
    printf("You only have one argument. Gimme moar pl0x.\n");
  } else if (argc > 2 && argc < 4) {
    printf("Here's your arguments:\n");

      for (int i = default_arg; i < argc; i++) {
        printf("%s ", argv[i]);
      }
      printf("\n");
  } else {
    printf("You have too many args. You mad, bro?\n");
  }

  return 0;
}
