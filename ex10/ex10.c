#include <stdio.h>

char toLowerCase(char letter) {
  int upperCaseA = 65;
  int upperCaseZ = 90;
  int lowerCaseDelta = 32;

  if (letter >= upperCaseA && letter <= upperCaseZ) {
    return letter + lowerCaseDelta;
  }

  return letter;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("ERROR: you need at least one argument\n");
    // this is how you abort a program
    return 1;
  }

  char null_byte = '\0';


  for (int j = 1; argv[j]; j++) {
    for (int i = 0; argv[j][i] != null_byte; i++) {
      char letter = toLowerCase(argv[j][i]);

      switch(letter) {
        case 'a':
          printf("%d: 'A'\n", i);
          break;

        case 'e':
          printf("%d: 'E'\n", i);
          break;

        case 'i':
          printf("%d: 'I'\n", i);
          break;

        case 'o':
          printf("%d: 'O'\n", i);
          break;

        case 'u':
          printf("%d: 'U'\n", i);
          break;

        case 'y':
          if (i > 2) {
            // its only somtimes Y
            printf("%d: sometimes 'Y'\n", i);
          }
          break;

        default:
          printf("%d: %c is not a vowel\n", i, letter);
      }
    }
  }

  return 0;
}

