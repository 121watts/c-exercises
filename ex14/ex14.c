#include <stdio.h>
#include <ctype.h>
#include <string.h>


// forward declarations
void print_letters(char arg[]) {
  int i = 0;
  char ch;

  for (i = 0; ch = arg[i], i < strlen(arg); i++) {
    if (isalpha((int)ch) || isblank((int)ch)) {
      printf("'%c' == '%d'", ch, ch);
    }
  }

  printf("\n");
}

int main(int argc, char *argv[]) {
  for (int i = 1; i < argc; i++) {
    print_letters(argv[i]);
  }

  return 0;
}
